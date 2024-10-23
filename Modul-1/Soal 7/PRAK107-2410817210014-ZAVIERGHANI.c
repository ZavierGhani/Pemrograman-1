#include <stdio.h>

int main() {

    int sisi_a = 4;
    int sisi_b = 5;
    int sisi_c = 7;

    int keliling = sisi_a + sisi_b + sisi_c;

    int harga_per_meter = 85000;

    int total_biaya = keliling * harga_per_meter;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi_a, sisi_b, sisi_c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga_per_meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d.%03d.%03d\n", total_biaya / 1000000, (total_biaya % 1000000) / 1000, total_biaya % 1000);
    return 0;
}
