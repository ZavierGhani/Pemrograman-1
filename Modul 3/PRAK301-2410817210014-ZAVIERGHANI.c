#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Masukkan tiga angka (dipisah dengan spasi): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Hasil pengurutan: %d %d %d\n", a, b, c);

    return 0;
}
