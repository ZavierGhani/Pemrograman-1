def cetak_pesan():
    harga_sepatu_A = 400000
    harga_sepatu_B = 350000

    diskon_A = 0.13
    diskon_B = 0.21

    harga_setelah_diskon_A = harga_sepatu_A * (1 - diskon_A)
    harga_setelah_diskon_B = harga_sepatu_B * (1 - diskon_B)

    print("Harga sepatu A adalah:", harga_sepatu_A)
    print("Harga sepatu B adalah:", harga_sepatu_B)
    print("Sepatu A mendapat diskon 13% sehingga harganya menjadi:", format(harga_setelah_diskon_A, ".0f"))
    print("Sepatu B mendapat diskon 21% sehingga harganya menjadi:", format(harga_setelah_diskon_B, ".0f"))

cetak_pesan()