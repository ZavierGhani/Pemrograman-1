def Biodata(tahunLahir, Nama, Asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunLahir
    
    print(f"Perkenalkan Nama Saya : {Nama}")
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {Asal}")

tahunLahir = int(input("Masukkan tahun lahir: "))
Nama = input("Masukkan nama: ")
Asal = input("Masukkan asal: ")

Biodata(tahunLahir, Nama, Asal)
