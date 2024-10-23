def cetak_pesan():
    a = 9
    b = 5
    x = 8
    y = 8

    sisa_a_b = a % b
    sisa_x_y = x % y
    total_sisa = sisa_a_b + sisa_x_y

    print("Variabel a bernilai:", a)
    print("Variabel b bernilai:", b)
    print("Variabel x bernilai:", x)
    print("Variabel y bernilai:", y)
    print("Total sisa bagi dari a dibagi b dan x dibagi y adalah:", total_sisa)

cetak_pesan()
