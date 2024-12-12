#include <stdio.h>

int main() {
    int pilihan;
    float nilaiPertama, nilaiKedua, hasil;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);
        
        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator ZA\n");
            break;
        }
        
        if (pilihan < 1 || pilihan > 5) {
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }

        printf("Masukkan nilai pertama : ");
        scanf("%f", &nilaiPertama);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &nilaiKedua);

        switch (pilihan) {
            case 1:  
                hasil = nilaiPertama + nilaiKedua;
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
                break;
            case 2:  
                hasil = nilaiPertama - nilaiKedua;
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
                break;
            case 3: 
                hasil = nilaiPertama * nilaiKedua;
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
                break;
            case 4:  
                if (nilaiKedua == 0) {
                    printf("Pembagian dengan nol tidak diperbolehkan\n");
                } else {
                    hasil = nilaiPertama / nilaiKedua;
                    printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
                }
                break;
            default:
                printf("Input anda salah, silahkan coba lagi\n");
        }
    }
    return 0;
}
    printf("%d\n", total);

    return 0;
}
