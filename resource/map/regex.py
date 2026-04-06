import os
import re
from pathlib import Path
from typing import Pattern, Union

# Configuration
FIND_PATTERN = r"(\{name (.*?)\}.*?)\{zoneA .*?\}[\r\n]*\s*\{zoneB .*?\}"
REPLACE_PATTERN = r"\1{zone\n\t\t\t\t{radius 0}\n\t\t\t\t{zoneId \"\2\"}\n\t\t\t}"
FILE_MASK = r"battle_zones.mi"  # Change this to match desired files

def apply_regex(
    content: str,
    find_pattern: Union[str, Pattern],
    replace_pattern: str
) -> str:
    if isinstance(find_pattern, str):
        find_pattern = re.compile(find_pattern, re.MULTILINE | re.DOTALL)
    
    # Use raw string for replacement to maintain backslashes
    def replace_func(match):
        # Get all groups from the match
        groups = match.groups()
        # Replace backreferences (\1, \2, etc.) with actual group values
        result = replace_pattern
        for i, group in enumerate(groups, 1):
            result = result.replace(f'\\{i}', group)
        return result
        
    return find_pattern.sub(replace_func, content)

def process_file(file_path: Path) -> None:
    try:
        # Read content
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()

        # Apply regex
        modified_content = apply_regex(content, FIND_PATTERN, REPLACE_PATTERN)

        # Only write if changes were made
        if modified_content != content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(modified_content)
            print(f"Modified: {file_path}")
        else:
            print(f"No changes needed: {file_path}")

    except Exception as e:
        print(f"Error processing {file_path}: {str(e)}")

def main():
    # Compile regex once for efficiency
    find_pattern = re.compile(FIND_PATTERN, re.MULTILINE | re.DOTALL)
    
    # Walk through directory tree
    for root, _, files in os.walk('.'):
        for file in files:
            file_path = Path(root) / file
            
            # Check if file matches mask
            if not file_path.match(FILE_MASK):
                continue
                
            process_file(file_path)

if __name__ == "__main__":
    main()