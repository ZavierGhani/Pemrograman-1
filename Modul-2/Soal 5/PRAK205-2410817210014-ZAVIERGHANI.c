#include <stdio.h>

int main() {
    float A, B;

    // Test case 1
    printf("Test Case 1\n");
    printf("Masukkan tinggi (A) dan sisi miring (B) (dipisah spasi): ");
    scanf("%f %f", &A, &B);

    float alas = sqrt(B * B - A * A);
    float keliling = A + B + alas;
    float luas = 0.5 * alas * A;

    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", A);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    printf("\n"); 

    // Test case 2
    printf("Test Case 2\n");
    printf("Masukkan tinggi (A) dan sisi miring (B) (dipisah spasi): ");
    scanf("%f %f", &A, &B);

    alas = sqrt(B * B - A * A);
    keliling = A + B + alas;
    luas = 0.5 * alas * A;

    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", A);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
}
