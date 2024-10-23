def cetak_pesan():
    
    alas = 5
    tinggi = 12

    sisi_miring = (alas**2 + tinggi**2) ** 0.5  

    keliling = alas + tinggi + sisi_miring
    luas = 0.5 * alas * tinggi

    print("Diketahui :")
    print(f"Alas = {alas} cm")
    print(f"Tinggi = {tinggi} cm")
    print("Jawab :")
    print(f"Sisi A = {alas} cm")
    print(f"Sisi B = {tinggi} cm")
    print(f"Sisi C = {sisi_miring:.2f} cm")
    print(f"Keliling = {keliling:.2f} cm")
    print(f"Luas = {luas:.2f} cm")

cetak_pesan()
