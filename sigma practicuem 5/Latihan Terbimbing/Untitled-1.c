#include <stdio.h>

int main (void) {
    int nilai;
    int percobaan = 1;

    printf("Masukkan nilai 0-100: ");
    scanf("%d", &nilai);

    while (nilai < 0 || nilai > 100) {
        printf("Nilai tidak valid. Masukkan lagi: ");
        scanf("%d", &nilai);
        percobaan++;
    }
    printf("Nilai diterima = %d (percobaan ke-%d)\n", nilai, percobaan);
    return 0;
}
    