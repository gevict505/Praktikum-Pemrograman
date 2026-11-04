#include <stdio.h>

int jumlahDigit(long long n) {
    if (n < 10) return (int)n;                 // kasus dasar: satu digit
    return (int)(n % 10) + jumlahDigit(n / 10);
}

int jumlahDigitIteratif(long long n) {
    int jumlah = 0;
    while (n > 0) {
        jumlah += (int)(n % 10);
        n /= 10;
    }
    return jumlah;
}

int main(void) {
    long long n;
    printf("Masukkan bilangan bulat nonnegatif: ");
    if (scanf("%lld", &n) != 1 || n < 0) {
        printf("Masukan tidak valid, bilangan harus bulat dan nonnegatif\n");
        return 1;
    }
    int hasilRekursif = jumlahDigit(n);
    int hasilIteratif = jumlahDigitIteratif(n);
    printf("Jumlah digit (rekursif) = %d\n", hasilRekursif);
    printf("Jumlah digit (iteratif) = %d\n", hasilIteratif);
    if (hasilRekursif == hasilIteratif) {
        printf("Kedua hasil sama\n");
    } else {
        printf("Kedua hasil berbeda\n");
    }
    return 0;
}