import re

def normalize_map_type(map_id):
    """Extract and normalize map type from map ID."""
    if '_' not in map_id:
        return None
        
    # Try different patterns
    # Pattern 1: NvN_rest (e.g., 2v2_map)
    # Pattern 2: NxN_rest (e.g., 2x2_gsm_map)
    first_part = map_id.split('_')[0].lower()
    
    # Convert if it's in NxN format
    if 'x' in first_part:
        first_part = first_part.replace('x', 'v')
    
    # Validate it's in NvN format
    if re.match(r'\d+v\d+', first_part):
        return first_part
        
    return None

def parse_map_data(content):
    # Extract all map entries using regex
    pattern = r'\{\s*"([^"]+)"\s*\{\s*"name"\s*"([^"]+)"\s*\}\s*\}'
    matches = re.finditer(pattern, content)
    
    maps_by_type = {}
    skipped_maps = []
    
    for match in matches:
        map_id, map_name = match.groups()
        
        map_type = normalize_map_type(map_id)
        
        if map_type is None:
            skipped_maps.append((map_id, map_name, "Could not determine map type"))
            continue
            
        if map_type not in maps_by_type:
            maps_by_type[map_type] = []
            
        maps_by_type[map_type].append((map_id, map_name))
    
    return maps_by_type, skipped_maps

def generate_po_content(maps_by_type):
    output = ["# RobZ\n"]
    
    # Sort map types to ensure consistent order
    for map_type in sorted(maps_by_type.keys()):
        output.append(f"\n# {map_type.upper()} Maps")
        
        # Sort maps within each type
        for map_id, map_name in sorted(maps_by_type[map_type]):
            # Process mod tags
            # First, find and store the player count (e.g., "2x2" or "3x3")
            player_count_match = re.search(r'<c\([^)]+\)>(\d+x\d+)</c>', map_name)
            if player_count_match:
                player_count = player_count_match.group(1)
                
                # Determine which mod tags to add
                mod_tags = []
                
                # AS2 tag (gray color)
                #if "bebebe" in map_name:
                #    mod_tags.append("<c(bebebe)>[AS2]</c>")
                
                # RobZ tag (green color)
                #if "00ff0aff" in map_name:
                #    mod_tags.append("<c(00ff0aff)>[RobZ]</c>")
                
                # GSM tag (yellow color)
                #if "gsm" in map_id.lower():
                #    mod_tags.append("<c(ffff00)>[GSM]</c>")
                mod_tags.append("<c(ff5030)>[Kirikax]</c>")
                
                # Replace the closing player count tag with mod tags
                if mod_tags:
                    mod_tags_str = " " + " ".join(mod_tags)
                    map_name = map_name.replace(f">{player_count}</c>", f">{player_count}</c>{mod_tags_str}")
            
            output.append(f'msgctxt "mission/multi/{map_id}/name"')
            output.append(f'msgid "{map_name}"')
            output.append('msgstr ""\n')
    
    return '\n'.join(output)

def main():
    # Read the input file
    with open('mission.ln', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # Parse and organize the map data
    maps_by_type, skipped_maps = parse_map_data(content)
    
    # Print statistics
    print("\nProcessing Statistics:")
    print("-" * 50)
    total_maps = sum(len(maps) for maps in maps_by_type.values())
    print(f"Successfully processed maps: {total_maps}")
    print(f"Skipped maps: {len(skipped_maps)}")
    
    # Print map counts by type
    print("\nMaps by type:")
    print("-" * 50)
    for map_type, maps in sorted(maps_by_type.items()):
        print(f"{map_type}: {len(maps)} maps")
    
    # Print skipped maps
    if skipped_maps:
        print("\nSkipped maps:")
        print("-" * 50)
        for map_id, map_name, reason in skipped_maps:
            print(f"Map ID: {map_id}")
            print(f"Map Name: {map_name}")
            print(f"Reason: {reason}")
            print("-" * 30)
    
    # Generate the PO format content
    po_content = generate_po_content(maps_by_type)
    
    # Write to output file
    with open('mission_aa.pot', 'w', encoding='utf-8') as f:
        f.write(po_content)
    
    print("\nOutput has been written to output.po")

if __name__ == "__main__":
    main()