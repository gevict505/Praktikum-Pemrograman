#include <stdio.h>
#include <ctype.h>

/* Mengubah satuan s menjadi Celsius, lalu ke satuan tujuan d.
   Satuan: 'C' = Celsius, 'F' = Fahrenheit, 'R' = Reamur */
float suhu(float t, char s, char d) {
    float c;

    /* langkah 1: ubah suhu sumber ke Celsius */
    if (s == 'C')
        c = t;
    else if (s == 'F')
        c = (t - 32.0) * 5.0 / 9.0;
    else
        c = t * 5.0 / 4.0;           /* s == 'R' */

    /* langkah 2: ubah Celsius ke satuan tujuan */
    if (d == 'C')
        return c;
    else if (d == 'F')
        return c * 9.0 / 5.0 + 32.0;
    else
        return c * 4.0 / 5.0;        /* d == 'R' */
}

int satuan_valid(char x) {
    return x == 'C' || x == 'F' || x == 'R';
}

/* batas bawah suhu (nol mutlak) untuk tiap satuan */
float nol_mutlak(char s) {
    if (s == 'C')
        return -273.15;
    else if (s == 'F')
        return -459.67;
    else
        return -218.52;
}

int main(void) {
    float t;
    char s, d;

    printf("Masukkan suhu sumber = ");
    if (scanf("%f %c", &t, &s) != 2) {
        printf("Masukan tidak valid. Contoh: 100 C\n");
        return 0;
    }
    s = toupper((unsigned char) s);

    printf("Masukkan suhu tujuan = ");
    if (scanf(" %c", &d) != 1) {
        printf("Masukan tidak valid. Contoh: R\n");
        return 0;
    }
    d = toupper((unsigned char) d);

    if (!satuan_valid(s) || !satuan_valid(d)) {
        printf("Satuan tidak dikenal. Gunakan C, F, atau R.\n");
        return 0;
    }
    if (t < nol_mutlak(s)) {
        printf("Suhu berada di bawah nol mutlak.\n");
        return 0;
    }

    printf("Hasil konversi suhu  = %g %c\n", suhu(t, s, d), d);

    return 0;
}
