#include <stdio.h>

double hitung_akar_kuadrat(double angka) {
    double hasil;
    double temp;

    hasil = angka / 2; 
    temp = 0;

    while (hasil != temp) {
        temp = hasil;
        hasil = (angka / temp + temp) / 2; 
    }

    return hasil;
}

int main() {
    int alas = 5;
    int tinggi = 12;
    double sisi_miring = hitung_akar_kuadrat(alas * alas + tinggi * tinggi);

    int keliling = alas + tinggi + (int)sisi_miring; 
    int luas = 0.5 * alas * tinggi; 

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", alas);
    printf("Sisi B = %d cm\n", tinggi);
    printf("Sisi C = %d cm\n", (int)sisi_miring); 
    printf("Keliling = %d cm\n", keliling); 
    printf("Luas = %d cm\n", luas); 

    return 0;
}
