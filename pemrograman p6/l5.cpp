#include <stdio.h>
#include <time.h>

#define BATAS 1000000000

int main() {
    register int i;
    int j;
    clock_t awal, akhir;
    double waktu_register, waktu_integer;

    awal = clock();
    for (i = 0; i < BATAS; i++) { }
    akhir = clock();
    waktu_register = (double)(akhir - awal) / CLOCKS_PER_SEC;

    awal = clock();
    for (j = 0; j < BATAS; j++) { }
    akhir = clock();
    waktu_integer = (double)(akhir - awal) / CLOCKS_PER_SEC;

    printf("Jumlah perulangan       : %d kali\n", BATAS);
    printf("Waktu variabel register : %.3f detik\n", waktu_register);
    printf("Waktu variabel integer  : %.3f detik\n", waktu_integer);
    printf("Selisih waktu           : %.3f detik\n",
           waktu_integer - waktu_register);
    return 0;
}

