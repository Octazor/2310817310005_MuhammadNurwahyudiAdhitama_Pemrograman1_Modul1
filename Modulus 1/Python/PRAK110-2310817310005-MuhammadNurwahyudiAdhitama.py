import math
alas = 12
tinggi =5
miring = round(math.sqrt(alas*alas + tinggi*tinggi))
c = round(alas+tinggi+miring)
d = round(alas*tinggi/2)
print("diketahui : ")
print(f"alas = {alas}cm")
print(f"tinggi = {tinggi}cm\n")
print(f"jawab :")
print(f"Sisi a = {tinggi}cm")
print(f"Sisi b = {miring}cm")
print(f"Sisi c = {alas}cm")
print(f"Keliling = {c}cm")
print(f"Luas = {d}cm")