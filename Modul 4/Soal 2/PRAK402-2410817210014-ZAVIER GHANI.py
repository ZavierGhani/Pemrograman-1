def main():
    batas = int(input("Masukkan batas maksimal: "))

    ganjil = [str(i) for i in range(1, batas + 1, 2)]
    print(" ".join(ganjil))

    genap = [str(i) for i in range(batas, 1, -1) if i % 2 == 0]
    print(" ".join(genap))

main()