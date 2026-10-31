#include <stdio.h>

int main(void) {
    int n, i;
    long jumlah = 0;

    printf("Masukkan n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n harus minimal 1.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        jumlah += i;
    }

    printf("Jumlah triangular 1 sampai %d = %ld\n", n, jumlah);
    printf("Pengecekan rumus n(n+1)/2    = %ld\n", (long)n * (n + 1) / 2);
    return 0;
}