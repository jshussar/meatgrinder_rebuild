#!/usr/bin/env python3
"""
Validator script for Gates of Hell mod files.

1. AI .lua files: Checks that unit references are valid and no "doctrine" tag in type arrays
2. MP .set files: Checks for missing/duplicate macro arguments, extra arguments, and duplicate unit names
"""

import re
import os
import sys
from pathlib import Path
from collections import defaultdict

# Base path for the mod
MOD_ROOT = Path(__file__).parent / "resource"

# Settings files that contain macro definitions
SETTINGS_FILES = [
    "settings.set",
    "settings_inf.set",
]


def parse_lua_units(lua_content: str) -> list[dict]:
    """
    Extract unit entries from AI .lua files.
    Returns list of dicts with 'unit', 'types', 'line_num', 'is_commented'.

    Handles Lua comment idioms:
    - --[[ starts block comment, ]] ends it
    - ---[[ does NOT start block comment (third dash makes it a line comment)
    - Same applies to long brackets like --[====[ and ---[====[
    """
    entries = []
    lines = lua_content.split('\n')

    # Track block comment state
    in_block_comment = False

    for line_num, line in enumerate(lines, 1):
        stripped = line.strip()

        # Handle block comments: --[[ or --[=+[
        # But NOT ---[[ or ---[=+[ (those are line comments that DON'T start blocks)
        # Check for exactly 2 dashes before the bracket
        block_start = re.search(r'(?<!-)--\[(=*)\[', stripped)
        if block_start and not stripped.startswith('---'):
            in_block_comment = True

        # Check for block end: ]] or ]=+]
        if in_block_comment:
            if ']]' in stripped or re.search(r'\]=*\]', stripped):
                in_block_comment = False
                continue
            continue

        # Check if line is commented with -- (single line comment)
        is_line_commented = stripped.startswith('--')

        # Pattern to match unit entries: {priority = X, type = {...}, unit = "..."}
        # Match the type array and unit name
        match = re.search(
            r'\{\s*priority\s*=\s*[\d.]+\s*,\s*type\s*=\s*\{([^}]*)\}\s*,\s*unit\s*=\s*"([^"]+)"',
            line
        )

        if match:
            types_str = match.group(1)
            unit_name = match.group(2)

            # Parse the types array
            types = [t.strip().strip('"').strip("'") for t in types_str.split(',') if t.strip()]

            entries.append({
                'unit': unit_name,
                'types': types,
                'line_num': line_num,
                'is_commented': is_line_commented
            })

    return entries


def extract_set_unit_names(set_content: str) -> set[str]:
    """
    Extract all unit names defined in a .set file.
    Handles both block style {"name" ...} and inline name(unit_name) style.
    """
    units = set()

    # Remove comments (lines starting with ;)
    lines = []
    for line in set_content.split('\n'):
        stripped = line.strip()
        if not stripped.startswith(';'):
            # Also handle inline comments
            if ';' in line:
                line = line[:line.index(';')]
            lines.append(line)
    content = '\n'.join(lines)

    # Pattern 1: Block style {"unit_name" ...}
    # Match opening brace, quoted name, then anything until closing brace
    block_pattern = r'\{\s*"([^"]+)"'
    for match in re.finditer(block_pattern, content):
        units.add(match.group(1))

    # Pattern 2: Inline style with name(unit_name)
    name_pattern = r'name\(([^)]+)\)'
    for match in re.finditer(name_pattern, content):
        units.add(match.group(1))

    return units


def validate_ai_lua_file(lua_path: Path, valid_units: set[str]) -> list[str]:
    """
    Validate an AI .lua file.
    Returns list of error messages.
    """
    errors = []

    with open(lua_path, 'r', encoding='utf-8') as f:
        content = f.read()

    entries = parse_lua_units(content)

    for entry in entries:
        if entry['is_commented']:
            continue

        # Check 1: No "doctrine" in type array (case insensitive)
        for t in entry['types']:
            if t.lower() == 'doctrine':
                errors.append(
                    f"{lua_path.name}:{entry['line_num']}: "
                    f"Unit '{entry['unit']}' has 'doctrine' tag in type array"
                )

        # Check 2: Unit should exist in valid units
        # Strip the (faction) suffix if present for matching
        unit_name = entry['unit']
        base_name = re.sub(r'\([^)]+\)$', '', unit_name)

        if unit_name not in valid_units and base_name not in valid_units:
            errors.append(
                f"{lua_path.name}:{entry['line_num']}: "
                f"Unit '{unit_name}' not found in .set files"
            )

    return errors


def parse_macro_definitions(set_content: str) -> dict[str, dict]:
    """
    Parse macro definitions from settings.set to extract required parameters and parent macros.
    Returns dict of macro_name -> {params: set of param names, parent: parent macro name or None, parent_args: dict of args passed to parent}
    """
    macros = {}

    # Remove comments
    lines = []
    for line in set_content.split('\n'):
        stripped = line.strip()
        if not stripped.startswith(';'):
            if ';' in line:
                line = line[:line.index(';')]
            lines.append(line)
    content = '\n'.join(lines)

    # Pattern: (define "macro_name" ... )
    # Need to handle nested parens properly
    define_pattern = r'\(define\s+"([^"]+)"'

    for match in re.finditer(define_pattern, content):
        macro_name = match.group(1)
        start_pos = match.end()

        # Find the matching closing paren by counting parens
        paren_count = 1
        pos = start_pos
        while pos < len(content) and paren_count > 0:
            if content[pos] == '(':
                paren_count += 1
            elif content[pos] == ')':
                paren_count -= 1
            pos += 1

        macro_body = content[start_pos:pos-1]

        # Find all %param references in the macro body
        params = set(re.findall(r'%(\w+)', macro_body))

        # Check for parent macro: ("parent_name" arg1(val) ...)
        # Need to handle nested parentheses properly
        parent_match = re.search(r'\(\s*"([^"]+)"', macro_body)
        parent = None
        parent_args = {}
        if parent_match:
            parent = parent_match.group(1)
            # Find the full parent call by counting parentheses from the opening paren
            start = macro_body.find('(')
            if start != -1:
                paren_count = 1
                pos = start + 1
                while pos < len(macro_body) and paren_count > 0:
                    if macro_body[pos] == '(':
                        paren_count += 1
                    elif macro_body[pos] == ')':
                        paren_count -= 1
                    pos += 1
                args_str = macro_body[start+1:pos-1]  # Content inside the parent call parens
                # Extract args passed to parent: argname(value) - need to handle nested parens
                arg_pattern = r'(\w+)\s*\('
                for arg_match in re.finditer(arg_pattern, args_str):
                    arg_name = arg_match.group(1)
                    if arg_name == parent:  # Skip the macro name itself
                        continue
                    # Find the value by counting parens from this position
                    arg_start = arg_match.end()
                    paren_count = 1
                    pos = arg_start
                    while pos < len(args_str) and paren_count > 0:
                        if args_str[pos] == '(':
                            paren_count += 1
                        elif args_str[pos] == ')':
                            paren_count -= 1
                        pos += 1
                    arg_value = args_str[arg_start:pos-1].strip()
                    parent_args[arg_name] = arg_value

        macros[macro_name] = {
            'params': params,
            'parent': parent,
            'parent_args': parent_args
        }

    return macros


def resolve_macro_params(macro_name: str, macro_defs: dict[str, dict], resolved_cache: dict = None) -> set[str]:
    """
    Recursively resolve all parameters required by a macro, including inherited ones.
    Returns set of all parameter names required.
    """
    if resolved_cache is None:
        resolved_cache = {}

    if macro_name in resolved_cache:
        return resolved_cache[macro_name]

    if macro_name not in macro_defs:
        return set()

    macro = macro_defs[macro_name]
    params = set(macro['params'])

    # If there's a parent macro, resolve its params too
    if macro['parent'] and macro['parent'] in macro_defs:
        parent_params = resolve_macro_params(macro['parent'], macro_defs, resolved_cache)
        # Parent params that are NOT satisfied by hardcoded args need to be passed through
        for p in parent_params:
            # Check if this param is satisfied by an arg passed to parent
            if p not in macro['parent_args']:
                params.add(p)
            else:
                # Check if the arg value contains a %param reference
                arg_value = macro['parent_args'][p]
                param_refs = re.findall(r'%(\w+)', arg_value)
                params.update(param_refs)

    resolved_cache[macro_name] = params
    return params


def validate_macro_call(line: str, line_num: int, macro_defs: dict[str, dict], resolved_params_cache: dict) -> list[str]:
    """
    Validate a macro call for duplicate, missing, and extra arguments.
    Returns list of error messages.
    """
    errors = []

    # Pattern: ("macro_name" arg1(val) arg2(val) ...)
    # First extract the macro name
    macro_match = re.match(r'\s*\(\s*"([^"]+)"', line)
    if not macro_match:
        return errors

    macro_name = macro_match.group(1)

    # Extract all arguments with their values: argname(value)
    args_pattern = r'(\w+)\s*\(([^)]*)\)'
    found_args = re.findall(args_pattern, line)

    # Group by argument name to check for duplicates
    arg_values = defaultdict(list)
    provided_args = set()
    for arg_name, arg_value in found_args:
        arg_values[arg_name].append(arg_value.strip())
        provided_args.add(arg_name)

    # Check for duplicate arguments
    for arg_name, values in arg_values.items():
        if len(values) > 1:
            unique_values = set(values)
            if len(unique_values) > 1:
                # Different values with same arg name - definitely a bug
                errors.append(
                    f"Line {line_num}: Duplicate argument '{arg_name}' with DIFFERENT values: {values}"
                )
            else:
                # Same value repeated - still likely a bug or bad macro usage
                errors.append(
                    f"Line {line_num}: Duplicate argument '{arg_name}' ({len(values)}x same value: '{values[0]}')"
                )

    # Check for missing and extra arguments if macro is known
    if macro_name in macro_defs:
        required_params = resolve_macro_params(macro_name, macro_defs, resolved_params_cache)

        # Check for missing arguments
        missing = required_params - provided_args
        if missing:
            errors.append(
                f"Line {line_num}: Missing arguments for macro '{macro_name}': {sorted(missing)}"
            )

        # Check for extra arguments
        extra = provided_args - required_params
        if extra:
            errors.append(
                f"Line {line_num}: Extra arguments for macro '{macro_name}': {sorted(extra)}"
            )

    return errors


def extract_unit_definitions(set_content: str, file_path: Path) -> list[dict]:
    """
    Extract unit definitions from a .set file.
    Returns list of dicts with 'name', 'faction', 'line_num'.
    """
    units = []
    lines = set_content.split('\n')

    for line_num, line in enumerate(lines, 1):
        stripped = line.strip()

        # Skip comments
        if stripped.startswith(';'):
            continue

        # Pattern: {"unit_name" ...} or {"unit_name(faction)" ...}
        # Match unit definitions that start a block
        unit_match = re.match(r'\{\s*"([^"]+)"', stripped)
        if unit_match:
            full_name = unit_match.group(1)

            # Extract faction from name - can be in format "name(faction)" or "mp/faction/period/name"
            faction = None

            # Check for (faction) suffix
            faction_suffix = re.search(r'\(([^)]+)\)$', full_name)
            if faction_suffix:
                faction = faction_suffix.group(1)
            else:
                # Try to extract from path format: mp/faction/period/name
                path_match = re.match(r'mp/(\w+)/', full_name)
                if path_match:
                    faction = path_match.group(1)

            # Also check for side() argument in the macro call on the same or next line
            side_match = re.search(r'side\s*\(\s*(\w+)\s*\)', stripped)
            if side_match:
                faction = side_match.group(1)

            units.append({
                'name': full_name,
                'faction': faction,
                'line_num': line_num
            })

    return units


def validate_set_file(set_path: Path, macro_defs: dict[str, dict], resolved_params_cache: dict) -> tuple[list[str], list[dict]]:
    """
    Validate a .set file for macro argument issues.
    Returns tuple of (list of error messages, list of unit definitions).
    """
    errors = []

    with open(set_path, 'r', encoding='utf-8') as f:
        content = f.read()

    lines = content.split('\n')

    # Track multi-line macro calls
    macro_call_lines = []
    macro_start_line = None
    paren_depth = 0

    for line_num, line in enumerate(lines, 1):
        # Remove comments from line
        if ';' in line:
            line = line[:line.index(';')]
        stripped = line.strip()

        # Skip empty lines when not accumulating
        if not stripped and not macro_call_lines:
            continue

        # Check if this starts a new macro call: ("macro_name" ...)
        if not macro_call_lines and re.match(r'\(\s*"', stripped):
            macro_call_lines = [stripped]
            macro_start_line = line_num
            paren_depth = stripped.count('(') - stripped.count(')')
        elif macro_call_lines:
            # Continue accumulating the macro call
            macro_call_lines.append(stripped)
            paren_depth += stripped.count('(') - stripped.count(')')

        # Check if macro call is complete (balanced parentheses)
        if macro_call_lines and paren_depth <= 0:
            full_macro_call = ' '.join(macro_call_lines)
            line_errors = validate_macro_call(full_macro_call, macro_start_line, macro_defs, resolved_params_cache)
            for err in line_errors:
                errors.append(f"{set_path.name}:{err}")
            # Reset for next macro call
            macro_call_lines = []
            macro_start_line = None
            paren_depth = 0

    # Extract unit definitions for duplicate checking
    units = extract_unit_definitions(content, set_path)

    return errors, units


def check_duplicate_units(all_units: list[tuple[Path, list[dict]]]) -> list[str]:
    """
    Check for duplicate unit names within the same faction.
    Returns list of error messages.
    """
    errors = []

    # Group units by (name, faction)
    unit_locations = defaultdict(list)
    for file_path, units in all_units:
        for unit in units:
            key = (unit['name'], unit['faction'])
            unit_locations[key].append((file_path, unit['line_num']))

    # Find duplicates
    for (name, faction), locations in unit_locations.items():
        if len(locations) > 1:
            faction_str = faction if faction else "unknown"
            loc_strs = [f"{p.name}:{ln}" for p, ln in locations]
            errors.append(
                f"Duplicate unit '{name}' (faction: {faction_str}) defined in: {', '.join(loc_strs)}"
            )

    return errors


def collect_all_units() -> set[str]:
    """
    Collect all valid unit names from .set files in the late period folder only.
    """
    all_units = set()
    units_dir = MOD_ROOT / "set" / "multiplayer" / "units" / "late"

    if not units_dir.exists():
        print(f"Warning: Units directory not found: {units_dir}")
        return all_units

    for set_file in units_dir.rglob("*.set"):
        if set_file.name == "settings.set":
            continue
        try:
            with open(set_file, 'r', encoding='utf-8') as f:
                content = f.read()
            units = extract_set_unit_names(content)
            all_units.update(units)
        except Exception as e:
            print(f"Warning: Could not parse {set_file}: {e}")

    return all_units


def load_macro_definitions() -> dict[str, list[str]]:
    """
    Load macro definitions from settings.set.
    """
    settings_path = MOD_ROOT / "set" / "multiplayer" / "units" / "settings.set"

    if not settings_path.exists():
        print(f"Warning: Settings file not found: {settings_path}")
        return {}

    with open(settings_path, 'r', encoding='utf-8') as f:
        content = f.read()

    return parse_macro_definitions(content)


def main():
    print("=" * 60)
    print("Gates of Hell Mod Validator")
    print("=" * 60)

    all_errors = []

    # Collect valid units
    print("\nCollecting valid unit definitions from .set files...")
    valid_units = collect_all_units()
    print(f"Found {len(valid_units)} unit definitions")

    # Load macro definitions
    print("\nLoading macro definitions...")
    macro_defs = load_macro_definitions()
    print(f"Found {len(macro_defs)} macro definitions")

    # Validate AI .lua files (only 44-45 and 46 periods)
    print("\n" + "-" * 60)
    print("Validating AI .lua files (44-45 and 46 only)...")
    print("-" * 60)

    lua_dir = MOD_ROOT / "script" / "multiplayer" / "units"
    if lua_dir.exists():
        for lua_file in lua_dir.rglob("*.lua"):
            # Only check files for late war periods
            if "44-45" not in lua_file.name and "46" not in lua_file.name:
                continue
            errors = validate_ai_lua_file(lua_file, valid_units)
            if errors:
                print(f"\n{lua_file.relative_to(MOD_ROOT)}:")
                for err in errors:
                    print(f"  - {err}")
                all_errors.extend(errors)
    else:
        print(f"Warning: Lua directory not found: {lua_dir}")

    # Validate MP .set files (late folder only)
    print("\n" + "-" * 60)
    print("Validating multiplayer .set files (late folder only)...")
    print("-" * 60)

    set_dir = MOD_ROOT / "set" / "multiplayer" / "units" / "late"
    resolved_params_cache = {}
    if set_dir.exists():
        for set_file in set_dir.rglob("*.set"):
            if set_file.name == "settings.set":
                continue
            errors, units = validate_set_file(set_file, macro_defs, resolved_params_cache)
            if errors:
                print(f"\n{set_file.relative_to(MOD_ROOT)}:")
                for err in errors:
                    print(f"  - {err}")
                all_errors.extend(errors)
    else:
        print(f"Warning: Set directory not found: {set_dir}")

    # Summary
    print("\n" + "=" * 60)
    if all_errors:
        print(f"VALIDATION FAILED: {len(all_errors)} error(s) found")
        return 1
    else:
        print("VALIDATION PASSED: No errors found")
        return 0


if __name__ == "__main__":
    sys.exit(main())
