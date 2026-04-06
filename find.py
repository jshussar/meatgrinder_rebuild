import os

def find_python_files():
    current_dir = os.getcwd()
    python_files = []

    for root, dirs, files in os.walk(current_dir):
        for file in files:
            if file.endswith('.py'):
                relative_path = os.path.relpath(os.path.join(root, file), current_dir)
                python_files.append(relative_path)

    return python_files

if __name__ == "__main__":
    python_files = find_python_files()
    
    if python_files:
        print("Python files found in the current directory:")
        for file in python_files:
            print(file)
    else:
        print("No Python files found in the current directory.")
