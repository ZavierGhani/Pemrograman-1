def hitung_kelipatan():
    n, kelipatan = map(int, input("Masukkan baris pertama (n) dan kelipatan (dipisahkan dengan spasi): ").split())
    
    total = 0
    
    for i in range(1, n + 1):
        sum_kelipatan = 0
        for j in range(i, 0, -1):
            sum_kelipatan += j * kelipatan
            if j > 1:
                print(f"({j} * {kelipatan}) + ", end="")
            else:
                print(f"({j} * {kelipatan}) = {sum_kelipatan}")
        
        total += sum_kelipatan 
    print(total)

hitung_kelipatan()
