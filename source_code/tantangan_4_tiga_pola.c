#include <stdio.h>

int main(void) {
    int n, i, j;

    printf("Masukkan ukuran pola (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Ukuran harus lebih dari 0.\n");
        return 0;
    }

    printf("\n1. Segitiga kiri\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n2. Segitiga terbalik\n");
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n3. Persegi\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}