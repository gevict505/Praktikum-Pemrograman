#include <stdio.h>

int main(void) {
    long long n, jumlah = 0;
    int digit;

    printf("Masukkan bilangan positif: ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("Input harus bilangan tidak negatif.\n");
        return 0;
    }

    if (n == 0) {
        jumlah = 0;
    } else {
        while (n > 0) {
            digit = (int)(n % 10);
            jumlah += digit;
            n /= 10;
        }
    }

    printf("Jumlah digit = %lld\n", jumlah);
    return 0;
}
