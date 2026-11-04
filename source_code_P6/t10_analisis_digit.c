#include <stdio.h>
#include <stdbool.h>

int hitungDigit(long long n) {
    if (n == 0) return 1;
    int banyak = 0;
    while (n > 0) {
        ++banyak;
        n /= 10;
    }
    return banyak;
}

// Membalik urutan digit. Tipe unsigned long long dipakai karena hasil
// pembalikan bilangan 19 digit bisa lebih besar dari batas long long
unsigned long long balikDigit(long long n) {
    unsigned long long hasil = 0;
    while (n > 0) {
        hasil = hasil * 10 + (unsigned long long)(n % 10);
        n /= 10;
    }
    return hasil;
}

bool palindrom(long long n) {
    return (unsigned long long)n == balikDigit(n);
}

int main(void) {
    long long n;
    printf("Masukkan bilangan bulat nonnegatif: ");
    if (scanf("%lld", &n) != 1 || n < 0) {
        printf("Masukan tidak valid, bilangan harus bulat dan nonnegatif\n");
        return 1;
    }
    printf("Banyak digit  = %d\n", hitungDigit(n));
    printf("Dibalik       = %llu\n", balikDigit(n));
    if (palindrom(n)) {
        printf("%lld adalah palindrom\n", n);
    } else {
        printf("%lld bukan palindrom\n", n);
    }
    return 0;
}
