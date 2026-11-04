#include <stdio.h>

void tampilkanPesan(void);

int main(void) {
    for (int i = 1; i <= 5; ++i) {
        printf("Pesan ke-%d: ", i);
        tampilkanPesan();
    }
    return 0;
}

void tampilkanPesan(void) {
    printf("Belajar fungsi C\n");
}
