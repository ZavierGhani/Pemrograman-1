#include <stdio.h>

int main() {
    int angka_pertama, angka_kedua;

    printf("Masukkan angka pertama dan kedua: ");
    scanf("%d %d", &angka_pertama, &angka_kedua);

    if (angka_pertama < angka_kedua) {
        for (int i = angka_pertama; i <= angka_kedua; i++) {
            printf("%d %d", i, angka_kedua - (i - angka_pertama));
            if (i != angka_kedua) {
                printf(" - ");
            }
        }
    } 
    else {
        for (int i = angka_pertama; i >= angka_kedua; i--) {
            printf("%d %d", i, angka_kedua + (angka_pertama - i));
            if (i != angka_kedua) {
                printf(" - ");
            }
        }
    }
    printf("\n");

    return 0;
}
