#include <stdio.h>
#include <limits.h>

/* Menghitung n! dengan nilai balik bertipe long int.
   Jika hasil melebihi batas long int, nilai balik = -1. */
long int factorial(int n) {
    long int hasil = 1;
    int i;

    for (i = 2; i <= n; i++) {
        if (hasil > LONG_MAX / i)
            return -1;               /* terjadi overflow */
        hasil = hasil * i;
    }

    return hasil;
}

int main(void) {
    int n;
    long int f;

    printf("Masukkan bilangan bulat n (n >= 0): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Masukan tidak valid. n harus bilangan bulat >= 0.\n");
        return 0;
    }

    f = factorial(n);

    if (f < 0)
        printf("%d! melebihi batas long int (maksimum %ld).\n", n, LONG_MAX);
    else
        printf("%d! = %ld\n", n, f);

    return 0;
}
