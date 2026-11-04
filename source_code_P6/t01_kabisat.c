#include <stdio.h>
#include <stdbool.h>

bool kabisat(int tahun) {
    if (tahun % 400 == 0) return true;
    if (tahun % 100 == 0) return false;
    return tahun % 4 == 0;
}

int main(void) {
    int tahun;
    printf("Masukkan tahun: ");
    if (scanf("%d", &tahun) != 1 || tahun <= 0) {
        printf("Masukan tidak valid, tahun harus bilangan bulat positif\n");
        return 1;
    }
    if (kabisat(tahun)) {
        printf("%d adalah tahun kabisat\n", tahun);
    } else {
        printf("%d bukan tahun kabisat\n", tahun);
    }
    return 0;
}
