import re

def modify_map_file(file_path):
    with open(file_path, 'r') as f:
        content = f.read()
    
    lines = content.split('\n')
    modified = False
    offset = 0
    
    # Find initial positions
    positions = {}
    for i, line in enumerate(lines):
        line = line.strip()
        if line == '{Helpers':
            positions['helpers'] = i
        elif line == '{reinforcements':
            positions['reinforcements'] = i
        elif line == '{triggers':
            positions['triggers'] = i
    
    # Handle Helpers section
    if 'helpers' in positions:
        next_line = lines[positions['helpers'] + 1].strip()
        if '(include "../bz_events.inc")' not in next_line:
            lines.insert(positions['helpers'] + 1, '\t\t(include "../bz_events.inc")')
            modified = True
            offset += 1
            # Update positions after helpers
            for key in positions:
                if positions[key] > positions['helpers']:
                    positions[key] += 1
    
    # Handle reinforcements section
    if 'reinforcements' in positions:
        # Find end of reinforcements block
        for i in range(positions['reinforcements'] + 1, len(lines)):
            if lines[i].strip() == '}':
                next_lines = '\n'.join(lines[i:i+5])
                if '{vars' not in next_lines:
                    lines.insert(i + 1, '\t\t{vars')
                    lines.insert(i + 2, '\t\t\t(include "../bz_vars.inc")')
                    lines.insert(i + 3, '\t\t}')
                    modified = True
                    offset += 3
                    # Update positions after vars block
                    for key in positions:
                        if positions[key] > i:
                            positions[key] += 3
                break
    
    # Handle triggers section
    if 'triggers' in positions:
        next_line = lines[positions['triggers'] + 1].strip()
        if '(include "../bz_triggers.inc")' not in next_line:
            lines.insert(positions['triggers'] + 1, '\t\t\t(include "../bz_triggers.inc")')
            modified = True
    else:
        # Find insertion point after vars or reinforcements
        insert_idx = -1
        for i, line in enumerate(lines):
            if line.strip() == '{vars':
                for j in range(i, len(lines)):
                    if lines[j].strip() == '}':
                        insert_idx = j + 1
                        break
                break
        
        if insert_idx == -1 and 'reinforcements' in positions:
            for i in range(positions['reinforcements'], len(lines)):
                if lines[i].strip() == '}':
                    insert_idx = i + 1
                    break
        
        if insert_idx != -1:
            lines.insert(insert_idx, '\t\t{triggers')
            lines.insert(insert_idx + 1, '\t\t\t(include "../bz_triggers.inc")')
            lines.insert(insert_idx + 2, '\t\t}')
            modified = True
    
    if modified:
        with open(file_path, 'w') as f:
            f.write('\n'.join(lines))
        return True
    
    return False

def process_directory(directory_path):
    """Process all .mi files in the given directory."""
    import os
    
    processed_count = 0
    modified_count = 0
    
    for root, _, files in os.walk(directory_path):
        for file in files:
            if file == "battle_zones.mi":
                processed_count += 1
                file_path = os.path.join(root, file)
                try:
                    if modify_map_file(file_path):
                        modified_count += 1
                        print(f"Modified: {file_path}")
                except Exception as e:
                    print(f"Error processing {file_path}: {e}")
    
    print(f"\nProcessing complete:")
    print(f"Files processed: {processed_count}")
    print(f"Files modified: {modified_count}")

if __name__ == '__main__':
    import sys
    
    if len(sys.argv) > 1:
        directory = sys.argv[1]
    else:
        directory = '.'
    
    process_directory(directory)