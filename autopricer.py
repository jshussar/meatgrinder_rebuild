#!/usr/bin/env python3
"""
Unit Autopricer for Gates of Hell mods.

Formula: unit_cost = sum(all_item_costs) * skill_multiplier
         OR override_cost if specified

Usage: python autopricer.py [--dry-run]
"""

import re
import os
from pathlib import Path

# =============================================================================
# CONFIGURATION - Edit these tables to tune pricing
# =============================================================================

# Skill rank -> skill level mapping (from vanilla defines)
# "rifle_skill_rank_2" -> rank 2 -> skill level 4
RANK_TO_SKILL = {
    0: 2,
    1: 3,
    2: 4,  # baseline
    3: 5,
    4: 6,
    5: 7,
    6: 8,
    7: 9,
}

# Skill level -> cost multiplier
SKILL_MULTIPLIERS = {
    1: 0.60,
    2: 0.75,
    3: 0.85,
    4: 1.00,  # baseline
    5: 1.15,
    6: 1.40,
    7: 1.70,
    8: 2.10,
    9: 2.60,
}

# Category -> base cost (fallback when item not in ITEM_COSTS)
CATEGORY_COSTS = {
    "rifle": 9,
    "smg": 10,
    "mgun": 40,
    "pistol": 5,
    "bazooka": 40,
    "reactive": 5,
    "flame": 55,
    "mortar": 50,
    "grenade": 0.3,
    "explosive": 2.5,
    "melee": 0,
    "special": 0,
}

# Weapon name -> category cache (built at startup from stuff/ folders)
WEAPON_CATEGORIES = {}

# Item name (or substring match) -> base cost
# This is checked FIRST - folder lookup is only a fallback
ITEM_COSTS = {
    # === RIFLES ===
    "enfield_no4": 8,
    "enfield_no1": 8,
    "enfield_no2": 8,
    "enfield_p14": 8,
    "p14": 8,
    "lee_enfield": 9,
    "de_lisle": 12,        # suppressed carbine
    "berthier": 9,         # French rifle
    "mosin": 8,
    "k98": 8,
    "g41": 13,
    "g43": 13,
    "svt": 13,
    "avt": 15,
    "m1_garand": 9,
    "m1_carbine": 8,
    "springfield": 9,

    # === SMGS ===
    "sten": 10,
    "patchett": 10,
    "m1928": 12,  # Thompson
    "thompson": 10,
    "mp40": 10,
    "mp38": 10,
    "ppsh": 10,
    "pps43": 10,
    "ppd": 13,
    "m3_grease": 10,
    "owen": 10,
    "lanchester": 10,

    # === LMGS / MGs ===
    "bren": 25,
    "lewis": 35,
    "vgo": 40,
    "vickers_go": 40,      # Vickers GO
    "vickers_k": 40,
    "fm_24": 30,           # French FM 24/29
    "dp27": 40,
    "dp28": 40,
    "dt": 40,
    "mg34": 40,
    "mg42": 40,
    "bar": 35,
    "m1919": 45,
    "chauchat": 20,
    "madsen": 35,

    # === ANTI-TANK ===
    "piat": 40,
    "boys": 30,
    "ptrd": 35,
    "ptrs": 35,
    "panzerfaust": 5,
    "panzerschreck": 45,
    "bazooka": 45,

    # === SPECIAL ===
    "flamethrower": 55,
    "flame_thrower": 55,
    "flamer": 55,
    "mortar": 50,
    "welrod": 8,           # suppressed pistol

    # === PISTOLS ===
    "pistol_no2": 5,       # Enfield No.2 revolver
    "webley": 5,
    "enfield_revolver": 5,
    "p38": 5,
    "luger": 5,
    "tt33": 5,
    "nagant_rev": 5,
    "m1911": 5,
    "colt": 5,
    "browning_hp": 5,

    # === GRENADES ===
    "no36m grenade": 0.3,
    "no69 grenade": 0.3,
    "no75 grenade": 0.6,  # AT grenade
    "no77_wp grenade": 0.45,
    "no82 grenade": 0.25,  # Gammon bomb
    "stielhandgranate": 0.5,
    "m24 grenade": 0.3,
    "rg42 grenade": 0.3,
    "rgd33 grenade": 0.5,
    "f1 grenade": 0.3,
    "rpg43 grenade": 0.55,
    "mk2 grenade": 0.3,
    "grenade": 0.3,  # fallback for any grenade

    # === EQUIPMENT (zero or low cost) ===
    "bandage": 0,
    "shovel": 0,
    "sandbag": 0,
    "wire_cutter": 0,
    "wirecutters": 0,
    "binocular": 1,
    "mine": 0,
    "mine_detector": 0,
    "satchel": 2.5,
    "tnt": 2.5,
    "demolition": 2.5,
    "beret": 0,
    "helmet": 0,
    "uk_helm": 0,
    "knife": 0,
    "pickaxe": 0,
    "bagpipes": 0,
    "radio": 0,
    "flare_pistol": 0,
    "flare_eng": 0,

    # === AMMO (zero cost - already factored into weapon) ===
    "ammo": 0,
    "clip": 0,
    "mag": 0,
    "belt": 0,
}

# Override costs for specific unit paths (bypasses formula)
# Key is the breed path as it appears in inf_*.set (without "mp/" prefix handling)
OVERRIDES = {
    # Example: "mp/eng/late/sas_flamer": 60,
}

# =============================================================================
# WEAPON CATEGORY LOOKUP
# =============================================================================

def build_weapon_categories(stuff_path):
    """Scan stuff/ folders to build weapon -> category mapping."""
    global WEAPON_CATEGORIES

    for category in CATEGORY_COSTS.keys():
        category_path = stuff_path / category
        if not category_path.exists():
            continue

        for item in category_path.iterdir():
            if item.is_file():
                name = item.name
                # Skip ammo files and hidden files
                if name.endswith('.ammo') or name.startswith('.'):
                    continue
                # Strip .weapon suffix if present
                if name.endswith('.weapon'):
                    name = name[:-7]
                WEAPON_CATEGORIES[name.lower()] = category

    return len(WEAPON_CATEGORIES)


def get_category_cost(item_name):
    """Look up cost via weapon category (fallback)."""
    item_lower = item_name.lower()

    # Try exact match
    if item_lower in WEAPON_CATEGORIES:
        category = WEAPON_CATEGORIES[item_lower]
        return CATEGORY_COSTS.get(category, 0)

    # Try substring match against known weapons
    for weapon, category in WEAPON_CATEGORIES.items():
        if weapon in item_lower:
            return CATEGORY_COSTS.get(category, 0)

    return None  # Not found


# =============================================================================
# PARSING
# =============================================================================

def parse_breed_file(filepath):
    """Parse a breed .set file and extract inventory items and skill rank."""
    with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
        content = f.read()

    # Remove comments
    content = re.sub(r';.*$', '', content, flags=re.MULTILINE)

    # Extract skill level from perks
    # Pattern 1: ("rifle_skill_rank_2") or ("mg_skill_rank_4") - rank maps to skill via RANK_TO_SKILL
    # Pattern 2: ("skill3") or ("skill5") - direct skill level
    skill_level = 4  # default baseline

    # Try pattern 2 first (direct skill level)
    direct_match = re.search(r'\("skill(\d+)"\)', content)
    if direct_match:
        skill_level = int(direct_match.group(1))
    else:
        # Try pattern 1 (rank-based)
        rank_match = re.search(r'\("(\w+)_skill_rank_(\d+)"\)', content)
        if rank_match:
            skill_rank = int(rank_match.group(2))
            skill_level = RANK_TO_SKILL.get(skill_rank, 4)

    # Extract inventory items with quantities
    # Patterns:
    #   {item "name"}                    -> qty 1
    #   {item "name" 1.75 0.5}           -> qty 1.75 (ignore variance)
    #   {item "name" filling "..." 10}   -> qty 1 (filling is for weapons)
    items = []
    for match in re.finditer(r'\{item\s+"([^"]+)"([^}]*)\}', content):
        item_name = match.group(1)
        rest = match.group(2).strip()

        qty = 1.0
        if rest and not rest.startswith('filling'):
            # First number after item name is quantity
            qty_match = re.match(r'([\d.]+)', rest)
            if qty_match:
                qty = float(qty_match.group(1))

        items.append((item_name, qty))

    return {
        'skill_level': skill_level,
        'items': items,
        'filepath': filepath,
    }


def get_item_cost(item_name):
    """Look up cost for an item. Manual table first, then category fallback."""
    item_lower = item_name.lower()

    # Check for ammo items FIRST (they should be free)
    # "ammo" anywhere in name = ammo item (e.g. "piat_bomb ammo heata")
    if 'ammo' in item_lower or item_lower.endswith('ammo'):
        return 0

    # 1. Try manual ITEM_COSTS (exact match)
    if item_lower in ITEM_COSTS:
        return ITEM_COSTS[item_lower]

    # 2. Try manual ITEM_COSTS (substring match)
    for pattern, cost in ITEM_COSTS.items():
        if pattern.lower() in item_lower:
            return cost

    # 3. Fall back to category-based lookup from stuff/ folders
    category_cost = get_category_cost(item_name)
    if category_cost is not None:
        return category_cost

    # Unknown item - return 0
    return 0


def calculate_unit_cost(breed_data):
    """Calculate unit cost from breed data."""
    # Check for override
    # Convert filepath to breed path format
    filepath = breed_data['filepath']
    # Extract the mp/nation/period/unit part
    match = re.search(r'breed[/\\]mp[/\\](.+)\.set$', str(filepath))
    if match:
        breed_path = "mp/" + match.group(1).replace('\\', '/')
        if breed_path in OVERRIDES:
            return OVERRIDES[breed_path], "override"

    # Sum all item costs (items are (name, qty) tuples)
    total_items_cost = 0
    item_breakdown = []
    for item_name, qty in breed_data['items']:
        unit_cost = get_item_cost(item_name)
        cost = unit_cost * qty
        if cost > 0:
            item_breakdown.append((item_name, qty, unit_cost, cost))
        total_items_cost += cost

    # Apply skill multiplier
    skill_level = breed_data['skill_level']
    multiplier = SKILL_MULTIPLIERS.get(skill_level, 1.0)

    final_cost = total_items_cost * multiplier

    breakdown = {
        'items_cost': total_items_cost,
        'item_breakdown': item_breakdown,
        'skill_level': skill_level,
        'multiplier': multiplier,
    }

    return round(final_cost, 1), breakdown


def parse_inf_file(filepath):
    """Parse an inf_*.set file and extract breed declarations."""
    with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
        lines = f.readlines()

    declarations = []
    for i, line in enumerate(lines):
        # Match: {"mp/eng/late/unit_name" ("inf_tier2_eng" side(eng) period(late) year(...) cost(X))}
        match = re.match(r'\s*\{"([^"]+)"\s+\("([^"]+)"\s+side\((\w+)\)\s+period\((\w+)\)\s+year\(([^)]+)\)\s+cost\(([^)]+)\)\)\}', line)
        if match:
            declarations.append({
                'line_num': i,
                'breed_path': match.group(1),
                'tier_macro': match.group(2),
                'side': match.group(3),
                'period': match.group(4),
                'year': match.group(5),
                'old_cost': match.group(6),
                'original_line': line,
            })

    return lines, declarations


# =============================================================================
# MAIN
# =============================================================================

def main():
    import sys
    dry_run = '--dry-run' in sys.argv
    verbose = '-v' in sys.argv or '--verbose' in sys.argv
    debug = '-vv' in sys.argv or '--debug' in sys.argv
    if debug:
        verbose = True  # debug implies verbose

    base_path = Path(__file__).parent / 'resource' / 'set'
    breed_base = base_path / 'breed'
    inf_base = base_path / 'multiplayer' / 'units'
    stuff_base = base_path / 'stuff'
    output_base = Path(__file__).parent / 'output' / 'set' / 'multiplayer' / 'units'

    # Build weapon category lookup from stuff/ folders
    num_weapons = build_weapon_categories(stuff_base)
    print(f"Loaded {num_weapons} weapons from stuff/ folders")

    # Find all inf_*.set files
    inf_files = list(inf_base.rglob('inf_*.set'))

    print(f"Found {len(inf_files)} inf_*.set files")

    for inf_file in inf_files:
        print(f"\nProcessing: {inf_file.relative_to(inf_base)}")

        lines, declarations = parse_inf_file(inf_file)

        changes = 0
        unknown_breeds = []

        for decl in declarations:
            # Find the corresponding breed file
            breed_path = decl['breed_path']  # e.g., "mp/eng/late/unit_name"
            breed_file = breed_base / (breed_path + '.set')

            if not breed_file.exists():
                unknown_breeds.append(breed_path)
                continue

            # Parse breed and calculate cost
            breed_data = parse_breed_file(breed_file)
            new_cost, breakdown = calculate_unit_cost(breed_data)

            old_cost = float(decl['old_cost'])

            if abs(new_cost - old_cost) > 0.05:  # Only update if different
                changes += 1

                # Rebuild the line with new cost
                new_line = decl['original_line'].replace(
                    f"cost({decl['old_cost']})",
                    f"cost({new_cost})"
                )
                lines[decl['line_num']] = new_line

                if verbose:
                    if isinstance(breakdown, dict):
                        print(f"  {breed_path}: {old_cost} -> {new_cost}")
                        print(f"    items={breakdown['items_cost']}, skill={breakdown['skill_level']}, mult={breakdown['multiplier']}")
                        if debug and breakdown['item_breakdown']:
                            for item_name, qty, unit_cost, total in breakdown['item_breakdown']:
                                if qty == 1.0:
                                    print(f"      {item_name}: {total}")
                                else:
                                    print(f"      {item_name}: {unit_cost} x {qty} = {total}")
                    else:
                        print(f"  {breed_path}: {old_cost} -> {new_cost} ({breakdown})")

        if unknown_breeds and verbose:
            print(f"  Unknown breeds ({len(unknown_breeds)}): {unknown_breeds[:5]}...")

        print(f"  Changes: {changes}")

        if not dry_run and changes > 0:
            # Write output file
            output_file = output_base / inf_file.relative_to(inf_base)
            output_file.parent.mkdir(parents=True, exist_ok=True)

            with open(output_file, 'w', encoding='utf-8') as f:
                f.writelines(lines)

            print(f"  Written to: {output_file}")

    if dry_run:
        print("\n(Dry run - no files written)")


if __name__ == '__main__':
    main()
