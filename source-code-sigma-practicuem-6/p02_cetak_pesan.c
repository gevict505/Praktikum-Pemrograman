#include <stdio.h>

void cetak_pesan(void);              /* deklarasi fungsi */

int main(void) {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Pesan ke-%d : ", i);
        cetak_pesan();               /* memanggil fungsi */
    }

    return 0;
}

void cetak_pesan(void) {             /* fungsi baru */
    printf("Ini dulu! baru itu!\n\n");
}
