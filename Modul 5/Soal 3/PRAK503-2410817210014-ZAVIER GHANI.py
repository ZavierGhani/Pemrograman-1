def maksimal(a, b):
    return max(a, b)

def minimal(a, b):
    return min(a, b)

print("Masukkan nilai (dipisahkan spasi): ", end="")
data = list(map(int, input().split()))  

bilangan = data[0]  
maks = -100000
minim = 100000

for nilai in data[1:]:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(maks, minim)
