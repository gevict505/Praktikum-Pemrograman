#include <stdio.h>

void fpb(int, int);                  /* deklarasi fungsi */

int main(void) {
    fpb(150, 35);
    fpb(1026, 405);
    fpb(83, 240);

    return 0;
}

void fpb(int u, int v) {
    int tampung;

    printf("FPB dari %d dan %d adalah ", u, v);

    while (v != 0) {
        tampung = u % v;
        u = v;
        v = tampung;
    }

    printf("%d\n", u);
}
