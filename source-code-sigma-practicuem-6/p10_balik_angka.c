#include <stdio.h>

int BalikAngka(int n) {
    static int temp, sum;            /* nilai tersimpan antar pemanggilan */

    if (n > 0) {
        temp = n % 10;
        sum = sum * 10 + temp;
        return BalikAngka(n / 10);   /* rekursi, hasilnya diteruskan */
    } else {
        return sum;
    }
}

int main(void) {
    int angka, balik;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    balik = BalikAngka(angka);
    printf("Angka %d dibalik menjadi %d\n", angka, balik);

    return 0;
}
