#include <stdio.h>

int main() {
    int n1, n2;
    printf("Masukkan jumlah elemen baris pertama dan kedua (dipisahkan spasi): ");
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    }

    int baris1[n1], baris2[n2];
    printf("Masukkan elemen baris pertama (dipisahkan spasi): ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &baris1[i]);
    }

    printf("Masukkan elemen baris kedua (dipisahkan spasi): ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &baris2[i]);
    }

    printf("Hasil Perkalian: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", baris1[i] * baris2[i]);
    }
    printf("\n");

    return 0;
}
