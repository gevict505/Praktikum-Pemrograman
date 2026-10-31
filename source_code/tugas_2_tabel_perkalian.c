#include <stdio.h>

int main(void) {
    int i, j;

    printf("    ");
    for (j = 1; j <= 10; j++) {
        printf("%4d", j);
    }
    printf("\n");

    for (i = 1; i <= 10; i++) {
        printf("%4d", i);
        for (j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
