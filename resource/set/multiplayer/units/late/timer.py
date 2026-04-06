import re
import glob

def process_file(filename):
    with open(filename, 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    modified = False
    for i, line in enumerate(lines):
        original_line = line
        line_modified = False
        
        # For cd pairs
        if 'cd(' in line and 'cd2(' in line:
            cd_match = re.search(r'cd\((\d+)\)', line)
            cd2_match = re.search(r'cd2\((\d+)\)', line)
            if cd_match and cd2_match:
                cd_value = int(cd_match.group(1))
                cd2_value = int(cd2_match.group(1))
                if cd_value <= cd2_value:
                    line = re.sub(r'cd\(\d+\)', f'cd({cd2_value})', line, count=1)
                line = re.sub(r'cd2\(\d+\)\s*', '', line)
                line_modified = True
        
        # For ci pairs
        if 'ci(' in line and 'ci2(' in line:
            ci_match = re.search(r'ci\((\d+)\)', line)
            ci2_match = re.search(r'ci2\((\d+)\)', line)
            if ci_match and ci2_match:
                ci_value = int(ci_match.group(1))
                ci2_value = int(ci2_match.group(1))
                if ci_value <= ci2_value:
                    line = re.sub(r'ci\(\d+\)', f'ci({ci2_value})', line, count=1)
                line = re.sub(r'ci2\(\d+\)\s*', '', line)
                line_modified = True
        
        if line_modified:
            modified = True
            print(f'\n{filename}, line {i+1}:')
            print(f'Old: {original_line.strip()}')
            print(f'New: {line.strip()}')
        
        lines[i] = line
                
    
    if modified:
        pass
        with open(filename, 'w', encoding='utf-8') as f:
            f.writelines(lines)

# Process all files in current directory
for filename in glob.glob('*'):  # Adjust file pattern as needed
    if not filename.endswith('.py'):
        process_file(filename)