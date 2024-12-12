#include <stdio.h>

int main() {
    int n, kelipatan;
    int total = 0;

    printf("Masukkan baris pertama (n) dan kelipatan (dipisahkan dengan spasi): ");
    scanf("%d %d", &n, &kelipatan);

    for (int i = 1; i <= n; i++) {
        int sum = 0;

        for (int j = i; j >= 1; j--) {
            sum += j * kelipatan;
            if (j > 1) {
                printf("(%d * %d) + ", j, kelipatan);
            } else {
                printf("(%d * %d) = %d\n", j, kelipatan, sum);
            }
        }

        total += sum;  
    }

    printf("%d\n", total);

    return 0;
}
