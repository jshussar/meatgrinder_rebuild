from pathlib import Path

def check_brackets(content: str) -> bool:
    depth = 0
    for ch in content:
        if ch == '{':
            depth += 1
        elif ch == '}':
            depth -= 1
            if depth < 0:
                return False
    return depth == 0

for path in Path('.').rglob('*'):
    if not path.is_file():
        continue
    
    try:
        content = path.read_text(encoding='utf-8')
    except (UnicodeDecodeError, PermissionError):
        continue
    
    if not check_brackets(content):
        print(path)