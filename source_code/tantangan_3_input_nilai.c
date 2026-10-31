#include <stdio.h>

int main(void) {
    float nilai, jumlah = 0;
    int banyak = 0;

    printf("Masukkan nilai (0-100). Ketik -1 untuk selesai.\n");
    printf("Nilai: ");
    scanf("%f", &nilai);

    while (nilai != -1) {                        
        if (nilai >= 0 && nilai <= 100) {
            jumlah += nilai;
            banyak++;
        } else {
            printf("Nilai tidak valid, diabaikan.\n");
        }
        printf("Nilai: ");
        scanf("%f", &nilai);
    }

    if (banyak > 0) {
        printf("Banyak data = %d\n", banyak);
        printf("Rata-rata   = %.2f\n", jumlah / banyak);
    } else {
        printf("Tidak ada data yang dimasukkan.\n");
    }
    return 0;
}