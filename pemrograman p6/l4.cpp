#include <stdio.h>

int prima(int n);

int main() {
    int n;
    char ulang;

    do {
        printf("Masukkan bilangan = ");
        scanf("%d", &n);

        if (prima(n) == 1)
            printf("%d adalah bilangan prima\n", n);
        else
            printf("%d bukan bilangan prima\n", n);

        printf("Coba lagi? (y/n) ");
        scanf(" %c", &ulang);
        printf("\n");
    } while (ulang == 'y' || ulang == 'Y');
    return 0;
}

int prima(int n) {
    int i;

    if (n < 2)
        return 0;
    for (i = 2; i <= n / i; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

