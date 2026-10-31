#include <stdio.h>
int main() {
    int tahun;
    printf("Masukkan tahun: "); scanf("%d", &tahun);
    if (tahun >= 1900 && tahun <= 2400) {
        if ((tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0))
            printf("%d adalah Tahun Kabisat\n", tahun);
        else
            printf("%d bukan Tahun Kabisat\n", tahun);
    } else {
        printf("Tahun di luar batas 1900-2400.\n");
    }
    return 0;
}
