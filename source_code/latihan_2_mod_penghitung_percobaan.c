#include <stdio.h>

int main(void) {
    int nilai, percobaan = 0;

    printf("Masukkan nilai 0-100: ");
    scanf("%d", &nilai);
    percobaan++;

    while (nilai < 0 || nilai > 100) {
        printf("Nilai tidak valid. Masukkan lagi: ");
        scanf("%d", &nilai);
        percobaan++;
    }

    printf("Nilai diterima = %d\n", nilai);
    printf("Jumlah percobaan input = %d\n", percobaan);
    return 0;
}
