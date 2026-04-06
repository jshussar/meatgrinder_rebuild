import glob
import re

def process_file(filename):
   with open(filename, 'r', encoding='utf-8') as f:
       lines = f.readlines()
   
   modified = False
   found_inf_crate = False
   
   for i, line in enumerate(lines):
       if 'inf_crate' in line:
           found_inf_crate = True
           continue
           
       if found_inf_crate and 'ci(' in line:
           original_line = line
           line = re.sub(r'ci\(\d+\)', 'ci(10)', line)
           lines[i] = line
           modified = True
           print(f'\n{filename}, line {i+1}:')
           print(f'Old: {original_line.strip()}')
           print(f'New: {line.strip()}')
           
   if modified:
       with open(filename, 'w', encoding='utf-8') as f:
           f.writelines(lines)

# Process all files in current directory
for filename in glob.glob('*'):
    if not filename.endswith('.py'):
        process_file(filename)