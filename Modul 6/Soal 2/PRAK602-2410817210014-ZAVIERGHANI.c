#include <stdio.h>

int main() {
    int n;

    printf("Masukkan jumlah ruangan: ");
    scanf("%d", &n);

    int zetsu[n];

    printf("Masukkan jumlah zetsu putih di setiap ruangan (dipisahkan spasi): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &zetsu[i]);
    }

    for (int i = 0; i < n; i++) {
        zetsu[i] *= (i + 1);
    }

    printf("Jumlah zetsu putih setelah membelah diri: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", zetsu[i]);
    }

    return 0;
}
