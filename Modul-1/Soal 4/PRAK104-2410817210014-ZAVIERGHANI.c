#include <stdio.h>

int main() {
    int harga_sepatu_A = 400000;
    int harga_sepatu_B = 350000;

    float diskon_A = 0.13;
    float diskon_B = 0.21;

    float harga_setelah_diskon_A = harga_sepatu_A * (1 - diskon_A);
    float harga_setelah_diskon_B = harga_sepatu_B * (1 - diskon_B);

    printf("Harga sepatu A adalah: %d\n\n", harga_sepatu_A);
    printf("Harga sepatu B adalah: %d\n\n", harga_sepatu_B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi: %.0f\n\n", harga_setelah_diskon_A);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi: %.0f\n\n", harga_setelah_diskon_B);

    return 0;
}
