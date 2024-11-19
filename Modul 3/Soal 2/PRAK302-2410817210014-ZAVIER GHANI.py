def konversi_nilai():

    nilai = int(input("Masukkan nilai: "))

    if nilai >= 80:
        huruf = 'A'
    elif nilai >= 70:
        huruf = 'B'
    elif nilai >= 60:
        huruf = 'C'
    elif nilai >= 50:
        huruf = 'D'
    else:
        huruf = 'E'


    print(huruf)

konversi_nilai()
