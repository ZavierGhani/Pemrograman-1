#include <stdio.h>

int main() {
    float a, b, i, j, x, y, hasil;

    // Test Case 1]
    printf("Test Case 1:\n");
    printf("Masukkan nilai a, b, i, j, x, y (dipisah spasi): ");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    hasil = ((a - b) * i) / j - (x + y);
    printf("%.3f\n", hasil);

    // Test Case 2
    printf("\nTest Case 2:\n");
    printf("Masukkan nilai a dan b (baris pertama): ");
    scanf("%f %f", &a, &b);
    
    printf("Masukkan nilai i dan j (baris kedua): ");
    scanf("%f %f", &i, &j);
    
    printf("Masukkan nilai x dan y (baris ketiga): ");
    scanf("%f %f", &x, &y);

    hasil = ((a - b) * i) / j - (x + y);

    printf("%.3f\n", hasil);

    return 0;
}
