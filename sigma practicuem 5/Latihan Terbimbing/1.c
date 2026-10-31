#include <stdio.h>

int main(void) {
    int n, i, jumlah = 0;

    printf("Masukkan n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            jumlah += i;
        }
    }

    printf("Jumlah = %d\n", jumlah);
    return 0;
}

