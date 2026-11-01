#include <stdio.h>

int i, j, k;                         /* variabel global */

int main(void) {
    for (i = 1; i < 100; i++) {
        for (j = 1; j < 200; j++) {
            k = i * j;
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
