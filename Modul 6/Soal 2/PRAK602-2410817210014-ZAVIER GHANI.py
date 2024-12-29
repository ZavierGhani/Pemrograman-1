n = int(input("Masukkan jumlah ruangan: "))

zetsu = list(map(int, input("Masukkan jumlah zetsu putih di setiap ruangan (dipisahkan spasi): ").split()))

hasil = [zetsu[i] * (i + 1) for i in range(n)]

print("Jumlah zetsu putih setelah membelah diri:", *hasil)
