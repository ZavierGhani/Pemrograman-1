def hitung_segitiga(tinggi, sisi_miring):
    alas = (sisi_miring ** 2 - tinggi ** 2) ** 0.5
    keliling = tinggi + sisi_miring + alas
    luas = 0.5 * alas * tinggi

    print(f"Alas = {alas:.0f} cm")
    print(f"Tinggi = {tinggi:.0f} cm")
    print(f"Keliling = {keliling:.0f} cm")
    print(f"Luas = {luas:.0f} cm^2")

# Test case 1
print("Test Case 1")
A1, B1 = map(float, input("Masukkan tinggi (A) dan sisi miring (B) (dipisah spasi): ").split())
hitung_segitiga(A1, B1)

print("\n") 

# Test case 2
print("Test Case 2")
A2, B2 = map(float, input("Masukkan tinggi (A) dan sisi miring (B) (dipisah spasi): ").split())
hitung_segitiga(A2, B2)
