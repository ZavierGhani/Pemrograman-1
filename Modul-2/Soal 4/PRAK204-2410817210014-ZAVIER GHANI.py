pi = 3.14

# Test Case 1
print("Test Case 1")
r1 = float(input("Masukkan jari-jari dan tinggi (dipisah spasi): ").split()[0])
h1 = float(input().strip())  

volume1 = pi * r1 * r1 * h1
luas1 = 2 * pi * r1 * (r1 + h1)
keliling1 = 2 * pi * r1

print(f"Volume = {volume1:.2f}")
print(f"Luas = {luas1:.2f}")
print(f"Keliling = {keliling1:.2f}")

print("\n") 

# Test Case 2
print("Test Case 2")
r2, h2 = map(float, input("Masukkan jari-jari dan tinggi (dipisah spasi): ").split())

volume2 = pi * r2 * r2 * h2
luas2 = 2 * pi * r2 * (r2 + h2)
keliling2 = 2 * pi * r2

print(f"Volume = {volume2:.2f}")
print(f"Luas = {luas2:.2f}")
print(f"Keliling = {keliling2:.2f}")
