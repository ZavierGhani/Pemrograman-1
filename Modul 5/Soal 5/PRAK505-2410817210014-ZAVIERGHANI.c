#include <stdio.h>

void Biodata(int tahunLahir, char Nama[], char Asal[]) {
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahunLahir;

    printf("Perkenalkan Nama Saya : %s\n", Nama);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya dari : %s\n", Asal);
}

int main() {
    int tahunLahir;
    char A[20], B[15];

    printf("Masukkan tahun lahir: ");
    scanf("%d", &tahunLahir);
    getchar(); 
    
    printf("Masukkan nama: ");
    scanf("%[^\n]%*c", A); 
    
    printf("Masukkan asal: ");
    scanf("%[^\n]%*c", B); 

    Biodata(tahunLahir, A, B);
    
    return 0;
}