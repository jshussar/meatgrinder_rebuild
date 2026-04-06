#!/usr/bin/env python3
"""
Script to identify duplicate lines in alpha.inc and light.inc files.
"""

from collections import defaultdict
from pathlib import Path


def find_duplicates(filepath):
    """
    Find duplicate lines in a file and return them with their line numbers.

    Args:
        filepath: Path to the file to check

    Returns:
        dict: Dictionary mapping lines to lists of line numbers where they appear
    """
    line_occurrences = defaultdict(list)

    with open(filepath, 'r', encoding='utf-8') as f:
        for line_num, line in enumerate(f, start=1):
            stripped_line = line.rstrip('\n\r')
            line_occurrences[stripped_line].append(line_num)

    # Filter to only duplicates (appearing more than once)
    duplicates = {line: line_nums for line, line_nums in line_occurrences.items()
                  if len(line_nums) > 1}

    return duplicates


def print_duplicates(filepath, duplicates):
    """
    Print duplicate lines in a readable format.

    Args:
        filepath: Path to the file
        duplicates: Dictionary of duplicate lines and their line numbers
    """
    print(f"\n{'='*80}")
    print(f"FILE: {filepath.name}")
    print(f"{'='*80}\n")

    if not duplicates:
        print("No duplicate lines found.")
        return

    # Sort by first occurrence
    sorted_duplicates = sorted(duplicates.items(),
                              key=lambda x: x[1][0])

    total_duplicates = 0

    for line, line_nums in sorted_duplicates:
        # Skip empty lines and comment-only lines if they appear multiple times
        # (these are often intentional formatting)
        if line.strip() == '' or line.strip().startswith(';'):
            continue

        total_duplicates += 1
        print(f"Line appears {len(line_nums)} times: \"{line}\"")
        print(f"  At line numbers: {', '.join(map(str, line_nums))}")
        print()

    print(f"Total duplicate non-empty/non-comment lines: {total_duplicates}")
    print(f"Total wasted lines: {sum(len(nums) - 1 for line, nums in sorted_duplicates
                                      if line.strip() != '' and not line.strip().startswith(';'))}")


def main():
    script_dir = Path(__file__).parent

    files_to_check = [
        script_dir / 'alpha.inc',
        script_dir / 'light.inc'
    ]

    for filepath in files_to_check:
        if not filepath.exists():
            print(f"ERROR: File not found: {filepath}")
            continue

        duplicates = find_duplicates(filepath)
        print_duplicates(filepath, duplicates)

    print(f"\n{'='*80}")
    print("Analysis complete.")
    print(f"{'='*80}\n")


if __name__ == '__main__':
    main()
