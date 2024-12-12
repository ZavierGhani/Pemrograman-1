#include <stdio.h>

int main() {
    int kelipatan;
    char simbol[2];

    printf("Masukkan bilangan kelipatan dan simbol (dipisahkan spasi): ");
    scanf("%d %s", &kelipatan, simbol);

    for (int i = 1; i <= 50; i++) {
        if (i % kelipatan == 0) {
            printf("%s ", simbol);
        } else {
            printf("%d ", i);
        }

        if (i % 10 == 0) {
        }
    }

    return 0;
}
