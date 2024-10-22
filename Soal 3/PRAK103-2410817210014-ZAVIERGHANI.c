#include <stdio.h>

int main() {
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;
    float hasil;
    hasil = (float)(a + b) * x / y;

    printf("Variabel a bernilai: %d\n\n", a);
    printf("Variabel b bernilai: %d\n\n", b);
    printf("Variabel x bernilai: %d\n\n", x);
    printf("Variabel y bernilai: %d\n\n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah: %.2f\n", hasil);

    return 0;
}
