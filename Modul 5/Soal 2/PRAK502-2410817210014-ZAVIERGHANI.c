#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2) {
    return nilai1 - nilai2;
}

int mutlak(int angka) {
    if (angka < 0) {
        return -angka;
    }
    return angka;
}

int main() {
    int a, b, c, d, hasil;

    printf("Masukkan nilai (dipisahkan spasi): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    hasil = mutlak(hitung(a, c)) + mutlak(hitung(b, d));
    printf("%d", hasil);

    return 0;
}
