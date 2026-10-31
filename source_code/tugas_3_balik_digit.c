#include <stdio.h>

int main(void) {
    long long n, balik = 0, digit;

    printf("Masukkan bilangan positif: ");
    scanf("%lld", &n);

    if (n <= 0) {
        printf("Input harus bilangan positif.\n");
        return 0;
    }

    while (n > 0) {
        digit = n % 10;
        balik = balik * 10 + digit;
        n /= 10;
    }

    printf("Hasil pembalikan = %lld\n", balik);
    return 0;
}