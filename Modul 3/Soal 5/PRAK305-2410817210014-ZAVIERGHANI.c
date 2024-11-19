#include <stdio.h>

void konversi_detik_ke_waktu(int detik) {
    int hari = detik / 86400;
    int sisa_detik = detik % 86400;
    int jam = sisa_detik / 3600;
    sisa_detik %= 3600;
    int menit = sisa_detik / 60;
    int detik_sisa = sisa_detik % 60;

    if (hari > 0) {
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik_sisa);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik_sisa);
    }
}

int main() {
    int detik;
    printf("Masukkan jumlah detik: ");
    scanf("%d", &detik);
    konversi_detik_ke_waktu(detik);
    return 0;
}
