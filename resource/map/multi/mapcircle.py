import os
import math
import re

def generate_hexadecagon_points(radius=300):
    points = []
    num_points = 16
    for i in range(num_points):
        angle = -2 * math.pi * i / num_points
        x = radius * math.cos(angle)
        y = radius * math.sin(angle)
        points.append((round(x, 4), round(y, 4)))
    return points

def process_map_file(input_file):
    # Read the entire input file
    with open(input_file, 'r') as f:
        content = f.read()

    # Find all flag point entities
    flag_points = re.findall(
        r'{Entity\s+"flag_point(?:_\d+)?"\s+0x[0-9a-fA-F]+\s*' 
        r'{Position\s+([-\d.]+)\s+([-\d.]+)(?:\s+([-\d.]+))?\s*}' 
        r'.*?{Extender\s+"map_point"\s*' 
        r'{name\s+(\w+)}\s*' 
        r'{zoneA\s+(\d+)}\s*' 
        r'{zoneB\s+(\d+)}', 
        content, 
        re.DOTALL
    )

    # Prepare the modified content
    modified_lines = content.split('\n')
    
    # Find the index to insert the new zones (under {Helpers block)
    try:
        helpers_index = next(
            i for i, line in enumerate(modified_lines) 
            if '{Helpers' in line
        )
    except StopIteration:
        # If no Helpers block exists, add one at the end
        modified_lines.append('{Helpers')
        helpers_index = len(modified_lines) - 1

    # Generate zones
    new_zones = []
    for match in flag_points:
        try:
            # If z coordinate is missing, default to 0
            if len(match) == 5:
                x, y, map_name, zoneA, zoneB = match
                z = '0'
            else:
                x, y, z, map_name, zoneA, zoneB = match
            
            if z == '':
                z = '0'
            
            radius = int(zoneA) * 20
            points = generate_hexadecagon_points(radius)
            
            zone = '\t\t{zone "poly"\n'
            zone += f'\t\t\t{{position {x} {y} {z}}}\n'
            zone += f'\t\t\t{{Name "{map_name}"}}\n'
            
            for px, py in points:
                zone += f'\t\t\t{{Point {round(float(px), 4)} {round(float(py), 4)}}}\n'
            
            zone += '\t\t}\n'
            new_zones.append(zone)
        except Exception as e:
            print(f"Error processing match in {input_file}: {e}")
            print(f"Problematic match: {match}")
            print(f"Match length: {len(match)}")

    # If no new zones were generated, skip file modification
    if not new_zones:
        print(f"No zones generated for {input_file}")
        return

    # Insert the new zones just after the {Helpers line
    modified_lines[helpers_index+1:helpers_index+1] = new_zones

    # Write the modified content back to the same file
    with open(input_file, 'w') as f:
        f.write('\n'.join(modified_lines))

def replace_zone_blocks(input_file):
    with open(input_file, 'r') as f:
        content = f.read()
    
    # Find and replace zoneA and zoneB blocks with the new zone format
    pattern = r'{name\s+(\w+)}\s*{zoneA\s+(\d+)}\s*{zoneB\s+\d+}'
    
    def replacement(match):
        name, radius = match.groups()
        return f'{{name {name}}}\n\t\t\t{{zone\n\t\t\t\t{{radius 0}}\n\t\t\t\t{{zoneId "{name}"}}\n\t\t\t}}'
    
    modified_content = re.sub(pattern, replacement, content)
    
    # Write the modified content back
    with open(input_file, 'w') as f:
        f.write(modified_content)

def process_directory(input_directory):
    # Walk through all files in the input directory
    for root, dirs, files in os.walk(input_directory):
        for file in files:
            # Check if file has .mi extension
            if file == "battle_zones.mi":
                # Construct full file path
                file_path = os.path.join(root, file)
                
                # Process the file in-place
                try:
                    process_map_file(file_path)
                    print(f"Processed: {file_path}")
                except Exception as e:
                    print(f"Error processing {file_path}: {e}")

def process_directory_with_zones(input_directory):
    # First pass: process the original poly zones
    process_directory(input_directory)
    
    # Second pass: replace zone blocks
    for root, dirs, files in os.walk(input_directory):
        for file in files:
            if file == "battle_zones.mi":
                file_path = os.path.join(root, file)
                try:
                    replace_zone_blocks(file_path)
                    print(f"Replaced zone blocks in: {file_path}")
                except Exception as e:
                    print(f"Error replacing zone blocks in {file_path}: {e}")

if __name__ == '__main__':
    input_directory = '.'  # Current directory, change as needed
    process_directory_with_zones(input_directory)