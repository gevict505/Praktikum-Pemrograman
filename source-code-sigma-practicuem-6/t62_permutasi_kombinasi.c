#include <stdio.h>
#include <limits.h>

long int factorial(int n) {
    long int hasil = 1;
    int i;

    for (i = 2; i <= n; i++) {
        if (hasil > LONG_MAX / i)
            return -1;               /* overflow */
        hasil = hasil * i;
    }

    return hasil;
}

/* P(n,r) = n! / (n-r)! */
long int permutasi(int n, int r) {
    long int a = factorial(n);
    long int b = factorial(n - r);

    if (a < 0 || b < 0)
        return -1;
    return a / b;
}

/* C(n,r) = n! / (r! (n-r)!) */
long int kombinasi(int n, int r) {
    long int a = factorial(n);
    long int b = factorial(r);
    long int c = factorial(n - r);

    if (a < 0 || b < 0 || c < 0)
        return -1;
    return a / (b * c);
}

int main(void) {
    int n, r;
    long int p, c;

    printf("Masukkan n: ");
    if (scanf("%d", &n) != 1) {
        printf("Masukan tidak valid. n harus bilangan bulat.\n");
        return 0;
    }
    printf("Masukkan r: ");
    if (scanf("%d", &r) != 1) {
        printf("Masukan tidak valid. r harus bilangan bulat.\n");
        return 0;
    }

    if (n < 0 || r < 0 || r > n) {
        printf("Masukan tidak valid. Syarat: n >= 0 dan 0 <= r <= n.\n");
        return 0;
    }

    p = permutasi(n, r);
    c = kombinasi(n, r);

    if (p < 0 || c < 0) {
        printf("Hasil tidak dapat dihitung: n! melebihi batas long int.\n");
        return 0;
    }

    printf("Permutasi P(%d,%d) = %ld\n", n, r, p);
    printf("Kombinasi C(%d,%d) = %ld\n", n, r, c);

    return 0;
}
