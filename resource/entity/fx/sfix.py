import re
import sys
from pathlib import Path

SCRIPT_PATH = Path(__file__).resolve()
PRIORITY = {'npower': 4, 'mpower': 3, 'power': 2, 'peak': 1, 'linear': 0}

def fix_visibility_blocks(content: str) -> str:
    lines = content.splitlines(keepends=True)
    block_re = re.compile(r'^(\s*)\{(#?\+?\s*)(linear|peak|npower|mpower|power)\b')
    
    # Collect: (line_idx, indent_len, keyword, is_commented)
    blocks = []
    for i, line in enumerate(lines):
        if m := block_re.match(line):
            blocks.append((i, len(m[1]), m[3], '##' in m[2]))
    
    # Group into sibling sets
    n = len(blocks)
    assigned = [False] * n
    sibling_groups = []
    
    for i in range(n):
        if assigned[i]:
            continue
        group = {i}
        assigned[i] = True
        changed = True
        while changed:
            changed = False
            for j in range(n):
                if j in group or assigned[j] or blocks[i][1] != blocks[j][1]:
                    continue
                if any(_are_siblings(lines, blocks[g][0], blocks[j][0], blocks[i][1]) for g in group):
                    group.add(j)
                    assigned[j] = True
                    changed = True
        sibling_groups.append(group)
    
    # For each group, keep only highest-priority preferred type
    to_fix = set()
    for group in sibling_groups:
        active = [(idx, blocks[idx][2]) for idx in group if not blocks[idx][3]]
        if len(active) <= 1:
            continue
        
        preferred_active = [(idx, kw) for idx, kw in active if kw != 'linear']
        if not preferred_active:
            continue
        
        winner_idx = max(preferred_active, key=lambda x: PRIORITY[x[1]])[0]
        
        for idx, _ in active:
            if idx != winner_idx:
                to_fix.add(blocks[idx][0])
    
    for line_idx in to_fix:
        lines[line_idx] = re.sub(r'\{#?\+?\s*(linear|peak|npower|mpower|power)\b', r'{## \1', lines[line_idx], count=1)
    
    return ''.join(lines)

def _are_siblings(lines: list[str], a: int, b: int, indent: int) -> bool:
    for i in range(min(a, b) + 1, max(a, b)):
        line = lines[i]
        if line.strip() and (len(line) - len(line.lstrip())) < indent:
            return False
    return True

def main():
    dry_run = '--dry-run' in sys.argv
    
    for path in Path('.').rglob('*'):
        if not path.is_file() or path.resolve() == SCRIPT_PATH:
            continue
        
        try:
            original = path.read_text(encoding='utf-8')
        except (UnicodeDecodeError, PermissionError):
            continue
        
        fixed = fix_visibility_blocks(original)
        
        if original != fixed:
            if dry_run:
                print(f"[DRY] Would fix: {path}")
            else:
                path.write_text(fixed, encoding='utf-8')
                print(f"Fixed: {path}")

if __name__ == '__main__':
    main()