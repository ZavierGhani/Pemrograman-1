def cetak_pesan():
    sisi_a = 4
    sisi_b = 5
    sisi_c = 7

    keliling = sisi_a + sisi_b + sisi_c

    harga_per_meter = 85000

    total_biaya = keliling * harga_per_meter

    print("Diketahui :")
    print(f"Panjang sisi segitiga berturut-turut adalah {sisi_a}, {sisi_b}, dan {sisi_c}")
    print(f"Keliling Tanah Pak Dengklek adalah {keliling}")
    print(f"Harga tanah Per Meter adalah {harga_per_meter}")
    print("Jawaban :")
    print(f"Biaya yang diperlukan Pak Dengklek adalah : Rp {total_biaya:,}")

cetak_pesan()
