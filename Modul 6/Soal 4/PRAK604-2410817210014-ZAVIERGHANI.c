#include <stdio.h>
#include <string.h>

int main() {
    char kode[100], pesan[100];
    int bintang = 0, pagar = 0;

    printf("Masukkan kode yang dimiliki oleh Shikamaru: ");
    scanf(" %[^\n]", kode);
    printf("Masukkan pesan yang diterima oleh Shikamaru: ");
    scanf(" %[^\n]", pesan);

    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    for (int i = 0; i < strlen(kode); i++) {
        if (kode[i] == pesan[i]) {
            printf("*");
            bintang++;
        } else {
            printf("#");
            pagar++;
        }
    }
    printf("\n");

    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);

    if (bintang >= pagar) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }

    return 0;
}
