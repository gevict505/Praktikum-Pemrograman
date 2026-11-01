#include <stdio.h>

int power(int angka, int pangkat) {
    if (pangkat != 0)
        return angka * power(angka, pangkat - 1);    /* rekursi */
    else
        return 1;                                    /* kasus dasar */
}

int main(void) {
    int angka, pangkat, hasil;

    printf("Masukkan angka: ");
    scanf("%d", &angka);
    printf("\nMasukkan pangkat (bulat positif): ");
    scanf("%d", &pangkat);

    hasil = power(angka, pangkat);
    printf("\n%d^%d = %d\n", angka, pangkat, hasil);

    return 0;
}
