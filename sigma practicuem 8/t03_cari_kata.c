#include <stdio.h>
#include <string.h>

/* Membaca satu baris, membuang newline, menolak masukan kosong
   atau terlalu panjang */
int bacaBaris(const char *label, char *buf, size_t ukuran) {
    printf("%s", label);
    if (fgets(buf, (int)ukuran, stdin) == NULL) {
        printf("Tidak ada masukan.\n");
        return 0;
    }
    if (strchr(buf, '\n') == NULL && strlen(buf) == ukuran - 1) {
        printf("Masukan terlalu panjang (maksimal %d karakter).\n",
               (int)ukuran - 2);
        return 0;
    }
    buf[strcspn(buf, "\n")] = '\0';
    if (buf[0] == '\0') {
        printf("Masukan tidak boleh kosong.\n");
        return 0;
    }
    return 1;
}

int main(void) {
    char kalimat[200], kunci[50];

    if (!bacaBaris("Masukkan kalimat   : ", kalimat, sizeof kalimat))
        return 1;
    if (!bacaBaris("Masukkan kata kunci: ", kunci, sizeof kunci))
        return 1;

    char *hasil = strstr(kalimat, kunci);

    printf("\nKalimat    : %s\n", kalimat);
    printf("Kata kunci : %s\n", kunci);
    if (hasil != NULL) {
        printf("             %*s^\n", (int)(hasil - kalimat), "");
        printf("Hasil      : ditemukan, indeks awal %td\n",
               hasil - kalimat);
    } else {
        printf("Hasil      : tidak ditemukan\n");
        printf("Catatan    : pencarian membedakan huruf besar "
               "dan kecil\n");
    }
    return 0;
}
