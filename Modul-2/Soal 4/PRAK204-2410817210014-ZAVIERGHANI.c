#include <stdio.h>

int main() {
    // Test Case 1
    float r1, h1;

    printf("Test Case 1\n");
    printf("Masukkan jari-jari dan tinggi (dipisah spasi): ");
    scanf("%f %f", &r1, &h1);

    float volume1 = 3.14 * r1 * r1 * h1; 
    float luas1 = 2 * 3.14 * r1 * (r1 + h1); 
    float keliling1 = 2 * 3.14 * r1; 

    printf("Volume = %.2f\n", volume1);
    printf("Luas = %.2f\n", luas1);
    printf("Keliling = %.2f\n", keliling1);

    printf("\n"); 

    // Test Case 2
    float r2, h2;

    printf("Test Case 2\n");
    printf("Masukkan jari-jari dan tinggi (dipisah spasi): ");
    scanf("%f %f", &r2, &h2);

    float volume2 = 3.14 * r2 * r2 * h2;
    float luas2 = 2 * 3.14 * r2 * (r2 + h2);
    float keliling2 = 2 * 3.14 * r2; 

    printf("Volume = %.2f\n", volume2);
    printf("Luas = %.2f\n", luas2);
    printf("Keliling = %.2f\n", keliling2);

    return 0;
}
