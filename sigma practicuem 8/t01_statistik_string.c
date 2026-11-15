#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define UKURAN 256

int main(void) {
    char kalimat[UKURAN];
    int huruf = 0, angka = 0, spasi = 0, lainnya = 0;

    printf("Masukkan satu kalimat: ");
    if (fgets(kalimat, sizeof kalimat, stdin) == NULL) {
        printf("Tidak ada masukan.\n");
        return 1;
    }

    if (strchr(kalimat, '\n') == NULL &&
        strlen(kalimat) == sizeof kalimat - 1) {
        printf("Kalimat terlalu panjang (maksimal %d karakter).\n",
               UKURAN - 2);
        return 1;
    }

    kalimat[strcspn(kalimat, "\n")] = '\0';
    size_t panjang = strlen(kalimat);
    if (panjang == 0) {
        printf("Kalimat tidak boleh kosong.\n");
        return 1;
    }

    for (size_t i = 0; i < panjang; i++) {
        unsigned char c = (unsigned char)kalimat[i];
        if (isalpha(c))
            huruf++;
        else if (isdigit(c))
            angka++;
        else if (isspace(c))
            spasi++;
        else
            lainnya++;
    }

    printf("\n===== Statistik String =====\n");
    printf("Kalimat            : %s\n", kalimat);
    printf("Panjang            : %zu karakter\n", panjang);
    printf("Huruf              : %d\n", huruf);
    printf("Angka              : %d\n", angka);
    printf("Spasi              : %d\n", spasi);
    printf("Tanda baca/lainnya : %d\n", lainnya);
    printf("Jumlah semua       : %d\n",
           huruf + angka + spasi + lainnya);
    return 0;
}
