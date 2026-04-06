import os

def count_map_dirs(path='.'):
   return sum(1 for d in os.listdir(path) 
             if os.path.isdir(os.path.join(path, d)) 
             and os.listdir(os.path.join(path, d)) != ['map'])

if __name__ == '__main__':
   print(count_map_dirs())