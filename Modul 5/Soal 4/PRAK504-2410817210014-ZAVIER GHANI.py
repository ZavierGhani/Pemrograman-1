def reverse(num):
    return int(str(num)[::-1])

print("Masukkan nilai A dan B (dipisahkan spasi): ", end="")
A, B = map(int, input().split())

A = reverse(A)
B = reverse(B)

C = A + B

print(reverse(C))
