#!/usr/bin/env python3
"""
Script to add weapon names to soldier localizations.
This script modifies soldier localization files to include the primary weapon name
in the soldier's display name.
"""

import os
import re
import glob
from pathlib import Path

# Weapon name overrides - custom names instead of localized names
WEAPON_OVERRIDES = {
    "k98": "K98",
    "kar98k": "K98",
    "mp40": "MP40",
    "stg44": "StG 44",
    "mp44": "MP44",
    "mg42": "MG42",
    "mg34": "MG34",
    "dynamite_ger_x7": "Dynamite",
    "lewis_gun": "Lewis Gun"
}

# Blacklisted factions - these will be skipped entirely
BLACKLISTED_FACTIONS = {
    # "ger": "German",
    # "rus": "Russian", 
    # "usa": "American",
    # "ita": "Italian",
    # "hun": "Hungarian",
    # "jap": "Japanese",
    # "fin": "Finnish",
    # "fra": "French",
    # "pol": "Polish",
    # "eng": "British"
}

# Suffix stripping configuration
# By default, strips common suffixes like (Drum), (Stick), etc.
# Set to False for specific weapons to keep their suffixes
STRIP_WEAPON_SUFFIXES = True
WEAPON_SUFFIX_EXCEPTIONS = {
    # Example: "ppsh41": False,  # Keep PPSH-41 (Drum) as is
    # "thompson": False,         # Keep Thompson (Stick) as is
}

# Suffixes that should NOT be stripped (blacklisted from removal)
SUFFIX_BLACKLIST = {
    "(Scope)",
    "(Sniper)",
    "(Scoped)",
}

def get_weapon_localization(weapon_id, weapon_loc_files):
    """Get the localized name for a weapon ID."""
    for loc_file in weapon_loc_files:
        try:
            # Try multiple encodings
            content = None
            for encoding in ['utf-8', 'cp1252', 'iso-8859-1', 'latin-1']:
                try:
                    with open(loc_file, 'r', encoding=encoding) as f:
                        content = f.read()
                    break
                except UnicodeDecodeError:
                    continue
            
            if content is None:
                print(f"Warning: Could not decode {loc_file} with any encoding")
                continue
                
            # Look for the weapon context
            pattern = rf'msgctxt "desc/weapon/{re.escape(weapon_id)}"\s*\nmsgid "([^"]+)"'
            match = re.search(pattern, content)
            if match:
                return match.group(1)
        except Exception as e:
            print(f"Error reading {loc_file}: {e}")
    
    return None

def get_primary_weapon_from_set(set_file_path):
    """Extract the primary weapon ID from a soldier set file."""
    try:
        with open(set_file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # Find the inventory block
        inventory_match = re.search(r'\{inventory\s*\n(.*?)\n\}', content, re.DOTALL)
        if not inventory_match:
            return None
        
        inventory_content = inventory_match.group(1)
        
        # Find the first item with "filled" or "filling" (primary weapon)
        # Try "filling" first as it's more specific to weapons
        item_match = re.search(r'\{item\s+"([^"]+)"\s+filling', inventory_content)
        if not item_match:
            item_match = re.search(r'\{item\s+"([^"]+)"\s+filled\}', inventory_content)
        
        if item_match:
            weapon_id = item_match.group(1)
            # Clean up weapon ID - remove common prefixes and suffixes
            weapon_id = weapon_id.replace('weapon ', '').replace(' weapon', '')
            # Skip if this is armor/equipment (not a weapon), continue to fallback logic
            if not any(skip in weapon_id.lower() for skip in ['cap', 'helm', 'hat', 'uniform', 'armor', 'sidecap', 'fieldcap']):
                return weapon_id
        
        # If no "filled" item, get the first item that's not ammo/equipment
        lines = inventory_content.split('\n')
        for line in lines:
            item_match = re.search(r'\{item\s+"([^"]+)"', line)
            if item_match:
                item_name = item_match.group(1)
                # Skip common non-weapon items
                if not any(skip in item_name.lower() for skip in ['ammo', 'grenade', 'bandage', 'shovel', 'clip', 'belt', 'dynamite']):
                    # Clean up weapon ID - remove common prefixes and suffixes
                    item_name = item_name.replace('weapon ', '').replace(' weapon', '')
                    # Skip if this is armor/equipment (not a weapon)
                    if any(skip in item_name.lower() for skip in ['cap', 'helm', 'hat', 'uniform', 'armor', 'sidecap', 'fieldcap']):
                        continue
                    return item_name
        
        return None
    except Exception as e:
        print(f"Error reading set file {set_file_path}: {e}")
        return None

def get_soldier_id_from_set_path(set_file_path):
    """Extract soldier ID from set file path."""
    path = Path(set_file_path)
    # Remove .set extension
    soldier_id = path.stem
    
    # Build the full path pattern for localization
    parts = path.parts
    if 'breed' in parts:
        breed_index = parts.index('breed')
        if breed_index + 1 < len(parts):
            # Get the path after 'breed'
            breed_path = '/'.join(parts[breed_index + 1:-1])  # Exclude filename
            return f"desc/human/{breed_path}/{soldier_id}"
    
    return None

def get_weapon_display_name(weapon_id, weapon_loc_files):
    """Get the display name for a weapon, using override if available."""
    # Check overrides first
    weapon_lower = weapon_id.lower()
    for override_key, override_value in WEAPON_OVERRIDES.items():
        if override_key in weapon_lower:
            return override_value
    
    # Try to get localized name
    localized_name = get_weapon_localization(weapon_id, weapon_loc_files)
    if localized_name:
        # Clean up the localized name - remove everything after |
        if '|' in localized_name:
            localized_name = localized_name.split('|')[0].strip()
        
        # Strip suffixes if enabled and not excepted
        if STRIP_WEAPON_SUFFIXES:
            # Check if this weapon is excepted from suffix stripping
            weapon_excepted = False
            for exception_key in WEAPON_SUFFIX_EXCEPTIONS.keys():
                if exception_key in weapon_lower and not WEAPON_SUFFIX_EXCEPTIONS[exception_key]:
                    weapon_excepted = True
                    break
            
            if not weapon_excepted:
                # Strip parenthetical suffixes, but only if not in blacklist
                import re
                # Find all parenthetical expressions
                parenthetical_pattern = r'\s*\([^)]+\)$'
                match = re.search(parenthetical_pattern, localized_name)
                if match:
                    suffix = match.group(0).strip()
                    # Only strip if not in blacklist
                    if suffix not in SUFFIX_BLACKLIST:
                        localized_name = re.sub(parenthetical_pattern, '', localized_name).strip()
        
        return localized_name
    
    # Error if no localization found
    raise ValueError(f"No localization found for weapon ID: {weapon_id}")

def process_soldier_localization_file(loc_file_path, weapon_loc_files, breed_dir, localization_errors):
    """Process a single soldier localization file."""
    try:
        # Try multiple encodings
        content = None
        used_encoding = None
        for encoding in ['utf-8', 'cp1252', 'iso-8859-1', 'latin-1']:
            try:
                with open(loc_file_path, 'r', encoding=encoding) as f:
                    content = f.read()
                used_encoding = encoding
                break
            except UnicodeDecodeError:
                continue
        
        if content is None:
            print(f"Error: Could not decode {loc_file_path} with any encoding")
            return
        
        # Create backup
        backup_path = loc_file_path + '.backup'
        with open(backup_path, 'w', encoding=used_encoding) as f:
            f.write(content)
        print(f"Created backup: {backup_path}")
        
        # Find all soldier entries
        pattern = r'msgctxt "(desc/human/[^"]+)"\s*\nmsgid "([^"]+)"\s*\nmsgstr ""'
        matches = re.finditer(pattern, content)
        
        modified = False
        new_content = content
        
        for match in matches:
            soldier_context = match.group(1)
            current_name = match.group(2)
            
            # Skip if weapon name already added (contains brackets)
            if '[' in current_name and ']' in current_name:
                continue
            
            # Extract soldier ID and path from context
            soldier_path_parts = soldier_context.split('/')
            if len(soldier_path_parts) >= 3:
                soldier_id = soldier_path_parts[-1]
                soldier_subpath = '/'.join(soldier_path_parts[2:-1])  # Skip 'desc/human'
                
                # Find corresponding set file
                set_file_pattern = os.path.join(breed_dir, soldier_subpath, f"{soldier_id}.set")
                set_files = glob.glob(set_file_pattern)
                
                if set_files:
                    primary_weapon = get_primary_weapon_from_set(set_files[0])
                    if primary_weapon:
                        try:
                            weapon_display_name = get_weapon_display_name(primary_weapon, weapon_loc_files)
                            new_name = f"{current_name} [{weapon_display_name}]"
                            
                            # Replace in content
                            old_entry = f'msgctxt "{soldier_context}"\nmsgid "{current_name}"\nmsgstr ""'
                            new_entry = f'msgctxt "{soldier_context}"\nmsgid "{new_name}"\nmsgstr ""'
                            new_content = new_content.replace(old_entry, new_entry)
                            modified = True
                            
                            print(f"Updated: {current_name} -> {new_name}")
                        except ValueError as e:
                            error_msg = f"{e} for soldier '{current_name}' in {soldier_context}"
                            print(f"ERROR: {error_msg}")
                            localization_errors.append(error_msg)
                            # Don't modify this entry, continue with others
        
        # Write back if modified
        if modified:
            with open(loc_file_path, 'w', encoding=used_encoding) as f:
                f.write(new_content)
            print(f"Modified: {loc_file_path}")
        
    except Exception as e:
        print(f"Error processing {loc_file_path}: {e}")

def main():
    """Main function to process all soldier localization files."""
    # Get base directory
    base_dir = os.path.dirname(os.path.abspath(__file__))
    
    # Paths
    soldier_loc_dir = os.path.join(base_dir, "localizations", "default", "interface", "text", "desc")
    weapon_loc_dir = os.path.join(base_dir, "localizations", "default", "interface", "text", "desc")
    breed_dir = os.path.join(base_dir, "resource", "set", "breed")
    
    # Find all soldier localization files
    soldier_loc_files = glob.glob(os.path.join(soldier_loc_dir, "*desc_breed_*.pot"))
    
    # Find all .pot files that might contain weapon localizations
    weapon_loc_files = glob.glob(os.path.join(weapon_loc_dir, "*.pot"))
    
    if not soldier_loc_files:
        print("No soldier localization files found!")
        return
    
    if not weapon_loc_files:
        print("No weapon localization files found!")
        return
    
    print(f"Found {len(soldier_loc_files)} soldier localization files")
    print(f"Found {len(weapon_loc_files)} weapon localization files")
    
    # Track statistics
    total_files = 0
    processed_files = 0
    skipped_files = 0
    error_count = 0
    localization_errors = []
    
    # Process each soldier localization file
    for loc_file in soldier_loc_files:
        filename = os.path.basename(loc_file)
        total_files += 1
        print(f"\nProcessing: {filename}")
        
        # Check if faction is blacklisted
        faction_found = False
        for faction_code in BLACKLISTED_FACTIONS.keys():
            if faction_code in filename.lower():
                print(f"Skipping {filename} - faction '{faction_code}' is blacklisted")
                faction_found = True
                skipped_files += 1
                break
        
        if faction_found:
            continue
        
        # Process the file and track if it completed successfully
        try:
            process_soldier_localization_file(loc_file, weapon_loc_files, breed_dir, localization_errors)
            processed_files += 1
        except Exception as e:
            print(f"CRITICAL ERROR processing {filename}: {e}")
            error_count += 1
    
    # Print final summary
    print(f"\n{'='*50}")
    print("PROCESSING COMPLETE")
    print(f"{'='*50}")
    print(f"Total files found: {total_files}")
    print(f"Files processed: {processed_files}")
    print(f"Files skipped (blacklisted): {skipped_files}")
    print(f"Files with critical errors: {error_count}")
    print(f"Weapon localization errors: {len(localization_errors)}")
    
    if error_count > 0:
        print(f"\n⚠️  COMPLETED WITH {error_count} CRITICAL ERRORS")
        print("Check the output above for details on failed files.")
    elif len(localization_errors) > 0:
        print(f"\n⚠️  COMPLETED WITH {len(localization_errors)} LOCALIZATION ERRORS")
        print("Some weapons could not be localized. Missing weapon definitions:")
        for error in localization_errors[:10]:  # Show first 10 errors
            print(f"  - {error}")
        if len(localization_errors) > 10:
            print(f"  ... and {len(localization_errors) - 10} more")
    elif processed_files == 0:
        print("\n⚠️  NO FILES WERE PROCESSED")
        print("All files were either skipped or had errors.")
    else:
        print(f"\n✅ COMPLETED SUCCESSFULLY")
        print(f"All {processed_files} files processed without errors.")

if __name__ == "__main__":
    main()