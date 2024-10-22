#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;
    float hasil;
    hasil = (float)a * b / c;

    printf("Variabel a bernilai: %d\n\n", a);
    printf("Variabel b bernilai: %d\n\n", b);
    printf("Variabel c bernilai: %d\n\n", c);
    printf("Hasil dari a dikali b dibagi c adalah: %.6f\n", hasil);

    return 0;
}
