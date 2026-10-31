#include <stdio.h>

int main(void) {
    int n, i;
    double nilai, jumlah = 0.0, rata_rata;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Jumlah data harus lebih dari 0.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("Nilai ke-%d: ", i);
        scanf("%lf", &nilai);
        jumlah += nilai;
    }

    rata_rata = jumlah / n;
    printf("Jumlah = %.2f\n", jumlah);
    printf("Rata-rata = %.2f\n", rata_rata);

    return 0;
}
