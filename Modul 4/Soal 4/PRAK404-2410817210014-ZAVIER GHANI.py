def kalkulator():
    while True:
        print("Pilih program")
        print("1. Penjumlahan")
        print("2. Pengurangan")
        print("3. Perkalian")
        print("4. Pembagian")
        print("5. Exit")

        try:
            pilihan = int(input("Masukkan Pilihan : "))
        except ValueError:
            print("Input tidak valid, silahkan coba lagi")
            continue

        if pilihan == 5:
            print("Terimakasih, telah menggunakan kalkulator ZA")
            break

        if pilihan < 1 or pilihan > 5:
            print("Input anda salah, silahkan coba lagi")
            continue

        try:
            nilaiPertama = float(input("Masukkan nilai pertama : "))
            nilaiKedua = float(input("Masukkan nilai kedua : "))
        except ValueError:
            print("Input nilai tidak valid, silahkan coba lagi")
            continue

        if pilihan == 1:  
            hasil = nilaiPertama + nilaiKedua
            print(f"Hasil Penjumlahan antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}")
        elif pilihan == 2:  
            hasil = nilaiPertama - nilaiKedua
            print(f"Hasil Pengurangan antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}")
        elif pilihan == 3:  
            hasil = nilaiPertama * nilaiKedua
            print(f"Hasil Perkalian antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}")
        elif pilihan == 4: 
            if nilaiKedua == 0:
                print("Pembagian dengan nol tidak diperbolehkan")
            else:
                hasil = nilaiPertama / nilaiKedua
                print(f"Hasil Pembagian antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}")

kalkulator()
