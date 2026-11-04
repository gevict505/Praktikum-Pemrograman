#include <stdio.h>

#define BATAS_N 20

long long faktorial(int n) {
    if (n < 0 || n > BATAS_N) return -1;
    long long hasil = 1;       
    for (int i = 2; i <= n; ++i) {
        hasil *= i;
    }
    return hasil;
}

int main(void) {
    int n;
    printf("Masukkan n: ");
    if (scanf("%d", &n) != 1) {
        printf("Masukan tidak valid\n");
        return 1;
    }
    if (n < 0) {
        printf("Faktorial tidak terdefinisi untuk bilangan negatif\n");
        return 1;
    }
    if (n > BATAS_N) {
        printf("n terlalu besar, %d! melebihi batas long long (n maksimum %d)\n", n, BATAS_N);
        return 1;
    }
    printf("%d! = %lld\n", n, faktorial(n));
    return 0;
}
