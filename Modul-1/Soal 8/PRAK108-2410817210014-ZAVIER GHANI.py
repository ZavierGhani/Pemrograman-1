PI = 3.14159265358979323846
def cetak_pesan():
    putaran = 5
    jarak_tempuh = 14.0  # dalam kilometer
    keliling_per_putaran = jarak_tempuh / putaran
    jari_jari = keliling_per_putaran / (2 * PI)

    print("Diketahui :")
    print(f"Pak Dengklek mengelilingi taman = {putaran} Putaran")
    print(f"Jarak tempuh Pak Dengklek = {jarak_tempuh} Kilometer")
    print("Jawaban :")
    print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jari_jari:.2f} Kilometer")

cetak_pesan()
