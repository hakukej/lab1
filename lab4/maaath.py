import math
n = float(input("enter the number for finding radian:"))
print(round(n*math.pi/180, 4))

height = float(input("Height: "))
base1 = float(input("Base, first value: "))
base2 = float(input("Base, second value: "))
print(((base1 + base2) * height) / 2)

n = int(input("Input number of sides: "))
s = float(input("Input the length of a side: "))
print(round((n * s**2) / (4 * math.tan(math.pi / n)), 4))

base = float(input("Length of base: "))
height = float(input("Height of parallelogram: "))
print(round(base * height, 4))
