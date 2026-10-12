import math

data = []
while len(data) < 2:
    data += input().split()

a, b = map(float, data)

tinggi = a
alas = int(math.sqrt(b * b - a * a))
keliling = alas + tinggi + b
luas = alas * tinggi / 2

print(f"Alas = {alas:g} cm")
print(f"Tinggi = {tinggi:g} cm")
print(f"Keliling = {keliling:g} cm")
print(f"Luas = {luas:g} cm^2")