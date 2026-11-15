#include <stdio.h>
#include <string.h>

#define MAKS_NAMA 40

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
    char depan[MAKS_NAMA + 2], belakang[MAKS_NAMA + 2];
    char pembanding[2 * MAKS_NAMA + 3];
    char lengkap[2 * MAKS_NAMA + 2];

    if (!bacaBaris("Nama depan      : ", depan, sizeof depan))
        return 1;
    if (!bacaBaris("Nama belakang   : ", belakang, sizeof belakang))
        return 1;
    if (!bacaBaris("Nama pembanding : ", pembanding, sizeof pembanding))
        return 1;

    strcpy(lengkap, depan);
    strcat(lengkap, " ");
    strcat(lengkap, belakang);

    printf("\nNama lengkap    : %s\n", lengkap);
    printf("Jumlah karakter : %zu (termasuk spasi)\n", strlen(lengkap));

    int hasil = strcmp(lengkap, pembanding);
    if (hasil == 0)
        printf("Perbandingan    : nama lengkap sama dengan "
               "nama pembanding\n");
    else if (hasil < 0)
        printf("Perbandingan    : nama lengkap lebih dahulu "
               "secara leksikografis\n");
    else
        printf("Perbandingan    : nama pembanding lebih dahulu "
               "secara leksikografis\n");
    return 0;
}
