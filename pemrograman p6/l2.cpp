#include <stdio.h>

long long faktorial(int n);
long long permutasi(int n, int r);
long long kombinasi(int n, int r);

int main() {
    int n, r;

    do {
        printf("Masukkan n (0-20) = ");
        scanf("%d", &n);
    } while (n < 0 || n > 20);

    do {
        printf("Masukkan r (0-%d) = ", n);
        scanf("%d", &r);
    } while (r < 0 || r > n);

    printf("\nP(%d,%d) = %d! / %d! = %lld\n",
           n, r, n, n - r, permutasi(n, r));
    printf("C(%d,%d) = %d! / (%d! x %d!) = %lld\n",
           n, r, n, r, n - r, kombinasi(n, r));
    return 0;
}

long long faktorial(int n) {
    if (n == 0)
        return 1;
    return n * faktorial(n - 1);
}

long long permutasi(int n, int r) {
    return faktorial(n) / faktorial(n - r);
}

long long kombinasi(int n, int r) {
    return faktorial(n) / (faktorial(r) * faktorial(n - r));
}

