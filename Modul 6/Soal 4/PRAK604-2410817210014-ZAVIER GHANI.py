kode = input("Masukkan kode yang dimiliki oleh Shikamaru: ")
pesan = input("Masukkan pesan yang diterima oleh Shikamaru: ")

if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    bintang = 0
    pagar = 0
    hasil = ""

    for k, p in zip(kode, pesan):
        if k == p:
            hasil += "*"
            bintang += 1
        else:
            hasil += "#"
            pagar += 1

    print(hasil)
    print(f"* = {bintang}")
    print(f"# = {pagar}")

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
