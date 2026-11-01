#include <stdio.h>
#include <time.h>

#define BATAS 1000000000             /* satu miliar putaran */

/* Pengganti gettime() milik Turbo C: mengembalikan waktu (detik) */
double gettime(void) {
    return (double) clock() / CLOCKS_PER_SEC;
}

int main(void) {
    register int r;                  /* variabel bertipe register */
    int n;                           /* variabel bertipe integer biasa */
    double mulai, selesai, waktu_register, waktu_integer;

    mulai = gettime();
    for (r = 0; r < BATAS; r++) {
    }
    selesai = gettime();
    waktu_register = selesai - mulai;

    mulai = gettime();
    for (n = 0; n < BATAS; n++) {
    }
    selesai = gettime();
    waktu_integer = selesai - mulai;

    printf("Banyak putaran              : %d\n", BATAS);
    printf("Waktu variabel register     : %.3f detik\n", waktu_register);
    printf("Waktu variabel integer      : %.3f detik\n", waktu_integer);

    if (waktu_register < waktu_integer)
        printf("Perulangan dengan register lebih cepat %.3f detik.\n",
               waktu_integer - waktu_register);
    else if (waktu_register > waktu_integer)
        printf("Perulangan dengan integer lebih cepat %.3f detik.\n",
               waktu_register - waktu_integer);
    else
        printf("Kedua perulangan membutuhkan waktu yang sama.\n");

    return 0;
}
