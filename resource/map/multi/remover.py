import os

for root, dirs, files in os.walk('.'):
   for file in files:
       if file.endswith('.mi') and file != 'battle_zones.mi':
           file_path = os.path.join(root, file)
           os.remove(file_path)
           print(f"Removed: {file_path}")