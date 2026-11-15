#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAKS_SANDI 49
#define MIN_SANDI 8

int main(void) {
    char sandi[MAKS_SANDI + 3];
    int adaBesar = 0, adaKecil = 0, adaAngka = 0;

    printf("Masukkan kata sandi (maksimal %d karakter): ", MAKS_SANDI);
    if (fgets(sandi, sizeof sandi, stdin) == NULL) {
        printf("Tidak ada masukan.\n");
        return 1;
    }
    sandi[strcspn(sandi, "\n")] = '\0';

    size_t panjang = strlen(sandi);
    if (panjang > MAKS_SANDI) {
        printf("Kata sandi terlalu panjang, maksimal %d karakter.\n",
               MAKS_SANDI);
        return 1;
    }

    for (size_t i = 0; i < panjang; i++) {
        unsigned char c = (unsigned char)sandi[i];
        if (isupper(c))
            adaBesar = 1;
        else if (islower(c))
            adaKecil = 1;
        else if (isdigit(c))
            adaAngka = 1;
    }

    int panjangCukup = (panjang >= MIN_SANDI);

    printf("\nPanjang kata sandi : %zu karakter\n", panjang);
    printf("Minimal %d karakter : %s\n", MIN_SANDI,
           panjangCukup ? "terpenuhi" : "belum terpenuhi");
    printf("Ada huruf besar    : %s\n",
           adaBesar ? "terpenuhi" : "belum terpenuhi");
    printf("Ada huruf kecil    : %s\n",
           adaKecil ? "terpenuhi" : "belum terpenuhi");
    printf("Ada angka          : %s\n",
           adaAngka ? "terpenuhi" : "belum terpenuhi");

    if (panjangCukup && adaBesar && adaKecil && adaAngka)
        printf("Keputusan          : kata sandi DITERIMA\n");
    else
        printf("Keputusan          : kata sandi DITOLAK\n");
    return 0;
}
