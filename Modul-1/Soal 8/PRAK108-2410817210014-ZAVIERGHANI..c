#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    int putaran = 5;
    float jarak_tempuh = 14.0; 

    float keliling_per_putaran = jarak_tempuh / putaran;

    float jari_jari = keliling_per_putaran / (2 * PI);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jarak_tempuh);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);

    return 0;
}
