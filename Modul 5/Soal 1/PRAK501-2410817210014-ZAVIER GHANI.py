def max_bilangan(a, b, c, d):
    return max(a, b, c, d)

print("Masukkan nilai (dipisahkan spasi): ", end="")
a, b, c, d = map(int, input().split())
hasil = max_bilangan(a, b, c, d)
print(hasil)
