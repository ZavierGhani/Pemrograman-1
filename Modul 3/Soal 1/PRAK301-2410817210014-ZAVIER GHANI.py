def urutkan_angka():

    a, b, c = map(int, input("Masukkan tiga angka (dipisah dengan spasi): ").split())

    if a > b:
        a, b = b, a
    if a > c:
        a, c = c, a
    if b > c:
        b, c = c, b

    print(f"Hasil pengurutan: {a} {b} {c}")

urutkan_angka()
