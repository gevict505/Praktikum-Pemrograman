#include <stdio.h>

int main(void) {
    register int i, j, k;

    for (i = 1; i < 100; i++) {
        for (j = 1; j < 200; j++) {
            k = i * j;
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
