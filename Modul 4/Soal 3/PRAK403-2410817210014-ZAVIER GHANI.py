def main():
    angka_pertama, angka_kedua = map(int, input("Masukkan angka pertama dan kedua: ").split())

    if angka_pertama < angka_kedua:
        for i in range(angka_pertama, angka_kedua + 1):
            print(i, angka_kedua - (i - angka_pertama), end=" - " if i != angka_kedua else "")
        print()
    else:
        for i in range(angka_pertama, angka_kedua - 1, -1):
            print(i, angka_kedua + (angka_pertama - i), end=" - " if i != angka_kedua else "")
        print()

main()
