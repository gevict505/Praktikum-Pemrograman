#include <stdio.h>

/* Nilai balik: 1 jika tahun kabisat, 0 jika bukan kabisat */
int kabisat(int tahun) {
    if ((tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0))
        return 1;
    else
        return 0;
}

int main(void) {
    int tahun, hasil;

    printf("Masukkan tahun: ");
    if (scanf("%d", &tahun) != 1 || tahun <= 0) {
        printf("Masukan tidak valid. Tahun harus bilangan bulat positif.\n");
        return 0;
    }

    hasil = kabisat(tahun);
    printf("Nilai balik kabisat() = %d\n", hasil);

    if (hasil == 1)
        printf("Tahun %d adalah tahun kabisat.\n", tahun);
    else
        printf("Tahun %d bukan tahun kabisat.\n", tahun);

    return 0;
}
