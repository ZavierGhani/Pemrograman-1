n1, n2 = map(int, input("Masukkan jumlah elemen baris pertama dan kedua (dipisahkan spasi): ").split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    baris1 = list(map(int, input("Masukkan elemen baris pertama (dipisahkan spasi): ").split()))
    baris2 = list(map(int, input("Masukkan elemen baris kedua (dipisahkan spasi): ").split()))
    
    hasil = [baris1[i] * baris2[i] for i in range(n1)]
    print("Hasil Perkalian:", *hasil)
