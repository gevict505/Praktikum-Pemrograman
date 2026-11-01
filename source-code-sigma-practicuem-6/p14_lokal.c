#include <stdio.h>

int x = 100;                         /* variabel global */

void tampil(void) {
    int x = 5;                       /* variabel lokal, menyembunyikan x global */
    printf("Di dalam tampil()        : x lokal = %d\n", x);
}

void ubah_global(void) {
    x = x + 1;                       /* mengubah variabel global */
}

int main(void) {
    int y = 7;                       /* variabel lokal milik main() */

    printf("Awal                     : x global = %d, y lokal = %d\n", x, y);
    tampil();
    printf("Setelah tampil()         : x global = %d\n", x);
    ubah_global();
    ubah_global();
    printf("Setelah ubah_global() 2x : x global = %d\n", x);

    return 0;
}
