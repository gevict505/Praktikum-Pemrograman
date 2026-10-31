#include <stdio.h>

int main(void) {
    int n, i;
    float nilai, minimum = 0, maksimum = 0, jumlah = 0;

    printf("Banyak siswa (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Banyak siswa harus lebih dari 0.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("Nilai siswa ke-%d (0-100): ", i);
        scanf("%f", &nilai);

        while (nilai < 0 || nilai > 100) {       
            printf("Nilai tidak valid. Masukkan lagi (0-100): ");
            scanf("%f", &nilai);
        }

        if (i == 1) {                             
            minimum = nilai;
            maksimum = nilai;
        } else {
            if (nilai < minimum) {
                minimum = nilai;
            }
            if (nilai > maksimum) {
                maksimum = nilai;
            }
        }
        jumlah += nilai;
    }

    printf("Nilai minimum  = %.2f\n", minimum);
    printf("Nilai maksimum = %.2f\n", maksimum);
    printf("Rata-rata      = %.2f\n", jumlah / n);
    return 0;
}