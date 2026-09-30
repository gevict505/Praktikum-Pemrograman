#include <stdio.h>
int main(void) {
    int tahun;
    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    if (tahun <= 0) {
        printf("Tahun tidak valid\n");
    } else if ((tahun % 400 == 0) ||
               (tahun % 4 == 0 && tahun % 100 != 0)) {
        printf("Tahun %d adalah tahun kabisat\n", tahun);
    } else {
        printf("Tahun %d bukan tahun kabisat\n", tahun);
    }
    return 0;
}
