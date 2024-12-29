baris, kolom = map(int, input("Masukkan jumlah baris dan kolom: ").split())

elemen = list(map(int, input("Masukkan elemen matriks (dipisahkan spasi): ").split()))

matriks = [elemen[i * kolom:(i + 1) * kolom] for i in range(baris)]

print("Output Matriks:")
for row in matriks:
    print(*row)
