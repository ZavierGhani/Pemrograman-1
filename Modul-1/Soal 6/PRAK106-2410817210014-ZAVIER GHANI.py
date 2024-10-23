def cetak_pesan():
    a = 4
    b = 8
    c = 3

    sama_dengan_ab = int(a == b)
    lebih_besar_bc = int(b > c)
    tidak_sama_ac = int(a != c)

    print("Variabel a bernilai:", a)
    print("Variabel b bernilai:", b)
    print("Variabel c bernilai:", c)
    print("Apakah a sama dengan b? jawabannya adalah", sama_dengan_ab)
    print("Apakah b lebih besar dari c? jawabannya adalah", lebih_besar_bc)
    print("Apakah a tidak sama dengan c? jawabannya adalah", tidak_sama_ac)

cetak_pesan()