#include <stdio.h>

/* Nilai balik: 1 jika n bilangan prima, 0 jika bukan */
int prima(int n) {
    int i;

    if (n < 2)
        return 0;                    /* 0, 1, dan negatif bukan prima */
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    for (i = 3; (long long) i * i <= n; i += 2) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main(void) {
    int n, hasil;

    printf("Masukkan bilangan bulat: ");
    if (scanf("%d", &n) != 1) {
        printf("Masukan tidak valid. Harus bilangan bulat.\n");
        return 0;
    }

    hasil = prima(n);
    printf("Nilai balik prima() = %d\n", hasil);

    if (hasil == 1)
        printf("%d adalah bilangan prima.\n", n);
    else
        printf("%d bukan bilangan prima.\n", n);

    return 0;
}
