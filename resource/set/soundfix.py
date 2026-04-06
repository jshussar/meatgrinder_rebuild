import os
import shutil
import re


for root, dirs, files in os.walk("./stuff/gun"):
    for name in files:
        lines = []
        with open(os.path.join(root, name)) as f:
            for line in f:
                if "sound" not in line.lower():
                    lines.append(line)
                    continue
                c = re.search("{.*", line)
                # the first word without the opening brace
                keyword = c[0].split()[0][1:]
                if c:
                    sounddef = c[0]
                    print(sounddef)
                else:
                    # no match, don't touch file
                    break
                    
                print("k:" + keyword)
                print(line)
                
                try:
                    with open(os.path.join("./stuff/gun2", name)) as f2:
                        origC = f2.read()
                        c2 = re.search(f"^.*{{{keyword}.*$", origC, re.M | re.I)
                        print("orig: " + c2[0])
                except Exception as e:
                    print(e)
                
                if c2:
                    line = c2[0] + "\n"
                    print("N:", line)
                    lines.append(line)
                else:
                    lines.append(line)
                    continue
                
        with open(os.path.join(root, name), "w") as f:
            for line in lines:
                f.write(line)