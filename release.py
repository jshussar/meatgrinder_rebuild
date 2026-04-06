import zipfile
import subprocess
import os
import re
import shlex
from zipfile import *
import shutil
import traceback

new_directory = "glowworm_release"
# copy mod directory
try:
    subprocess.call(shlex.split(f"powershell rmdir ../{new_directory} -force -recurse"), shell=True)
    shutil.copytree(".", f"../{new_directory}", ignore=shutil.ignore_patterns('.git*'))
except Exception as e:
    print("Couldn't delete folder, this is fucked up")
    print(traceback.format_exc())
# delete git shit
try:
    subprocess.call(shlex.split(f"powershell rmdir ../{new_directory}/.git -force -recurse"), shell=True)
    subprocess.call(shlex.split(f"powershell rmdir ../{new_directory}/.gitattributes -force -recurse"), shell=True)
except Exception as e:
    print("Couldn't delete git folder, remove it manually")
    print(traceback.format_exc())
    
# Update mod.info to remove dev suffix
mod_info_path = f"../{new_directory}/mod.info"
if os.path.exists(mod_info_path):
    with open(mod_info_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # Replace the name line, removing the dev suffix
    content = re.sub(r'(\{name "[^"]+) dev"}', r'\1"}', content)
    
    with open(mod_info_path, 'w', encoding='utf-8') as f:
        f.write(content)

# go in resource
os.chdir(f"../{new_directory}")
os.chdir("resource")
# paks
if os.path.exists("./entity"):
    subprocess.call(shlex.split(f"C:/Program Files/7-Zip/7z.exe a entity.pak ./entity -mx=3 -mmt=16 -sdel -tzip"))
if os.path.exists("./map"):
    subprocess.call(shlex.split(f"C:/Program Files/7-Zip/7z.exe a map.pak ./map -mx=3 -mmt=16 -sdel -tzip"))
if os.path.exists("./sound"):
    subprocess.call(shlex.split(f"C:/Program Files/7-Zip/7z.exe a sound.pak ./sound -mx=3 -mmt=16 -sdel -tzip"))
if os.path.exists("./music"):
    subprocess.call(shlex.split(f"C:/Program Files/7-Zip/7z.exe a music.pak ./music -mx=3 -mmt=16 -sdel -tzip"))
if os.path.exists("./texture"):
    subprocess.call(shlex.split(f"C:/Program Files/7-Zip/7z.exe a texture.pak ./texture -mx=3 -mmt=16 -sdel -tzip"))
#lets just assume this exists
subprocess.call(shlex.split(f"C:/Program Files/7-Zip/7z.exe a game.pak ./interface -i!./properties -i!./script -i!./set -mx=3 -mmt=16 -sdel -tzip"))
#subprocess.call(shlex.split(f"C:/Program Files/7-Zip/7z.exe a game.pak ./interface -i!./script -i!./set -mx=3 -mmt=16 -sdel -tzip"))

#pak localisation
os.chdir("../localizations")
subprocess.call(shlex.split(f"C:/Program Files/7-Zip/7z.exe a loc.pak ./default -mx=3 -mmt=16 -sdel -tzip"))