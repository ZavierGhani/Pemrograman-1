#include <stdio.h>

int main() {
    int baris, kolom;
    printf("Masukkan jumlah baris dan kolom: ");
    scanf("%d %d", &baris, &kolom);

    int matriks[baris][kolom];

    printf("Masukkan elemen matriks (dipisahkan spasi): ");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    printf("Output Matriks:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
