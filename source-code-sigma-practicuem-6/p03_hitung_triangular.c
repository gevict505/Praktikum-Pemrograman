#include <stdio.h>

/* Fungsi diletakkan di atas main(), sehingga tidak perlu deklarasi */
void hitung_triangular(int n) {
    int i, jumlah = 0;

    for (i = 1; i <= n; ++i)
        jumlah = jumlah + i;

    printf("Jumlah triangular %d adalah %d\n", n, jumlah);
}

int main(void) {
    hitung_triangular(10);
    hitung_triangular(20);
    hitung_triangular(50);

    return 0;
}
