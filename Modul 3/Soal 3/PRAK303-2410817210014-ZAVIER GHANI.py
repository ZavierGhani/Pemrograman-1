def periksa_bilangan():
    N = int(input("Masukkan bilangan bulat: "))

    if N > 0:
        print("positif")
    elif N < 0:
        print("negatif")
    else:
        print("nol")

periksa_bilangan()
