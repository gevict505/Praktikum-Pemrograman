#include <stdio.h>

int main(void) {
    int n, i, j;

    printf("Masukkan ukuran matriks n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Ukuran matriks harus lebih dari 0.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}

