#include <stdio.h>

int kabisat(int tahun);
long int factorial(int n);

int main() {
    int tahun, n;
    long int hasil;

    do {
        printf("Masukkan tahun (> 0) = ");
        scanf("%d", &tahun);
    } while (tahun <= 0);

    if (kabisat(tahun) == 1)
        printf("Tahun %d adalah tahun kabisat\n", tahun);
    else
        printf("Tahun %d bukan tahun kabisat\n", tahun);

    do {
        printf("\nMasukkan n untuk n! (0-12) = ");
        scanf("%d", &n);
    } while (n < 0 || n > 12);

    hasil = factorial(n);
    printf("%d! = %ld\n", n, hasil);
    return 0;
}

int kabisat(int tahun) {
    if ((tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0))
        return 1;
    else
        return 0;
}

long int factorial(int n) {
    long int hasil = 1;
    int i;

    for (i = 2; i <= n; i++)
        hasil *= i;
    return hasil;
}

