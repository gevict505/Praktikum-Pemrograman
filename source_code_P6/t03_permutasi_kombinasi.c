#include <stdio.h>

#define BATAS_N 20 

long long faktorial(int n) {
    long long hasil = 1;
    for (int i = 2; i <= n; ++i) {
        hasil *= i;
    }
    return hasil;
}

long long permutasi(int n, int r) {
    return faktorial(n) / faktorial(n - r);
}

long long kombinasi(int n, int r) {
    return faktorial(n) / (faktorial(r) * faktorial(n - r));
}

int main(void) {
    int n, r;
    printf("Masukkan n dan r: ");
    if (scanf("%d %d", &n, &r) != 2) {
        printf("Masukan tidak valid\n");
        return 1;
    }
   
    if (r < 0 || r > n) {
        printf("Syarat 0 <= r <= n tidak terpenuhi\n");
        return 1;
    }
    if (n > BATAS_N) {
        printf("n terlalu besar, n maksimum %d\n", BATAS_N);
        return 1;
    }
    printf("P(%d,%d) = %lld\n", n, r, permutasi(n, r));
    printf("C(%d,%d) = %lld\n", n, r, kombinasi(n, r));
    return 0;
}
