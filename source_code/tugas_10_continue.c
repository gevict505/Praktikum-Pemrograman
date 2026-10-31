#include <stdio.h>

int main(void) {
    int n, i, valid = 0;
    float nilai, jumlah = 0;

    printf("Banyak nilai ujian (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan nilai ke-%d (0-100): ", i);
        scanf("%f", &nilai);

        if (nilai < 0 || nilai > 100) {         
            printf("  -> Nilai %.2f dilewati karena tidak valid.\n", nilai);
            continue;                            
        }

        jumlah += nilai;
        valid++;
    }

    if (valid > 0) {
        printf("Nilai valid   : %d dari %d data\n", valid, n);
        printf("Jumlah        : %.2f\n", jumlah);
        printf("Rata-rata     : %.2f\n", jumlah / valid);
    } else {
        printf("Tidak ada nilai valid yang dapat dihitung.\n");
    }
    return 0;
}