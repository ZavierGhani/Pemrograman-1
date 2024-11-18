#include <stdio.h>

int main() {
    char nama[50];
    char nim[20];
    char kelas[10];
    char ttl[50];
    char alamat[100];
    char hobby[50];
    char no_hp[15];

    printf("Masukkan Nama: ");
    gets(nama);
    printf("Masukkan NIM: ");
    gets(nim);
    printf("Masukkan Kelas Paralel: ");
    gets(kelas);
    printf("Masukkan Tempat/Tanggal Lahir: ");
    gets(ttl);
    printf("Masukkan Alamat: ");
    gets(alamat);
    printf("Masukkan Hobby: ");
    gets(hobby);
    printf("Masukkan No. HP: ");
    gets(no_hp);

    printf("\n=== Biodata ===\n");
    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", nim);
    printf("Kelas Paralel: %s\n", kelas);
    printf("Tempat/Tanggal Lahir: %s\n", ttl);
    printf("Alamat: %s\n", alamat);
    printf("Hobby: %s\n", hobby);
    printf("No. HP: %s\n", no_hp);

    return 0;
}
