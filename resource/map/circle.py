import math
import re

# NOTE: ZONES ARE CLOCKWISE OTHERWISE IT BREAKS

def generate_hexadecagon_points(radius=300):
    points = []
    num_points = 16
    for i in range(num_points):
        angle = -2 * math.pi * i / num_points
        x = radius * math.cos(angle)
        y = radius * math.sin(angle)
        points.append((round(x, 4), round(y, 4)))
    return points

def process_file(input_file, output_file):
    with open(input_file, 'r') as f_in, open(output_file, 'w') as f_out:
        for line in f_in:
            match = re.match(r'(\w+)\s+{Position\s+([-\d.]+)\s+([-\d.]+)}', line.strip())
            if match:
                name, x, y = match.groups()
                points = generate_hexadecagon_points()
                
                zone = (
                    '{zone "poly"\n'
                    f'\t{{position {x} {y} 0}}\n'
                    f'\t{{Name "{name}"}}\n'
                )
                
                for px, py in points:
                    zone += f'\t{{Point {px} {py}}}\n'
                
                zone += '}\n'
                f_out.write(zone)

if __name__ == '__main__':
    process_file('input.txt', 'output.txt')