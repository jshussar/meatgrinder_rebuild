#!/usr/bin/env python3
"""
Script to remove duplicate lines from alpha.inc and light.inc files.
Keeps only the first occurrence of each line.
"""

from pathlib import Path


def remove_duplicates(filepath, backup=True):
    """
    Remove duplicate lines from a file, keeping only the first occurrence.

    Args:
        filepath: Path to the file to clean
        backup: Whether to create a backup file before modifying

    Returns:
        tuple: (lines_removed, total_lines_before, total_lines_after)
    """
    # Read the file
    with open(filepath, 'r', encoding='utf-8') as f:
        lines = f.readlines()

    total_lines_before = len(lines)

    # Create backup if requested
    if backup:
        backup_path = filepath.with_suffix(filepath.suffix + '.bak')
        with open(backup_path, 'w', encoding='utf-8') as f:
            f.writelines(lines)
        print(f"Created backup: {backup_path.name}")

    # Track seen lines and build deduplicated list
    seen = set()
    deduplicated_lines = []
    lines_removed = 0

    for line in lines:
        # For duplicate detection, we use the stripped version
        line_key = line.rstrip('\n\r')

        # Special handling: always keep empty lines and comment lines
        # (they're often used for formatting/organization)
        if line_key.strip() == '' or line_key.strip().startswith(';'):
            deduplicated_lines.append(line)
        elif line_key not in seen:
            seen.add(line_key)
            deduplicated_lines.append(line)
        else:
            lines_removed += 1
            print(f"  Removing duplicate at line {len(deduplicated_lines) + lines_removed + 1}: {line_key}")

    # Write the cleaned file
    with open(filepath, 'w', encoding='utf-8') as f:
        f.writelines(deduplicated_lines)

    total_lines_after = len(deduplicated_lines)

    return lines_removed, total_lines_before, total_lines_after


def main():
    script_dir = Path(__file__).parent

    files_to_clean = [
        script_dir / 'alpha.inc',
        script_dir / 'light.inc'
    ]

    print("="*80)
    print("REMOVING DUPLICATE LINES")
    print("="*80)
    print()

    total_removed = 0

    for filepath in files_to_clean:
        if not filepath.exists():
            print(f"ERROR: File not found: {filepath}")
            continue

        print(f"\nProcessing: {filepath.name}")
        print("-" * 80)

        removed, before, after = remove_duplicates(filepath, backup=True)

        print(f"\nResults for {filepath.name}:")
        print(f"  Lines before: {before}")
        print(f"  Lines after:  {after}")
        print(f"  Lines removed: {removed}")

        total_removed += removed

    print()
    print("="*80)
    print(f"COMPLETE - Total duplicate lines removed: {total_removed}")
    print("="*80)
    print()
    print("Backup files created with .bak extension")
    print("If something went wrong, you can restore from the backups.")


if __name__ == '__main__':
    main()
