#include <stdio.h>

void fungsiOtomatis(void) {
    int hitung = 0;
    ++hitung;
    printf("hitung = %d\n", hitung);
}

void fungsiStatic(void) {
    static int hitung = 0;
    ++hitung;
    printf("hitung = %d\n", hitung);
}

int main(void) {
    printf("Fungsi dengan variabel otomatis\n");
    for (int i = 1; i <= 5; ++i) {
        printf("Pemanggilan ke-%d: ", i);
        fungsiOtomatis();
    }

    printf("\nFungsi dengan variabel static\n");
    for (int i = 1; i <= 5; ++i) {
        printf("Pemanggilan ke-%d: ", i);
        fungsiStatic();
    }
    return 0;
}
