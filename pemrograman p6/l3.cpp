#include <stdio.h>
#include <ctype.h>

float suhu(float t, char s, char d);

int main() {
    float t, hasil;
    char s, d, ulang;

    do {
        printf("Masukkan suhu sumber = ");
        scanf("%f %c", &t, &s);
        printf("Masukkan suhu tujuan = ");
        scanf(" %c", &d);
        s = toupper(s);
        d = toupper(d);

        if ((s != 'C' && s != 'R' && s != 'F') ||
            (d != 'C' && d != 'R' && d != 'F')) {
            printf("Satuan harus C, R, atau F!\n");
        } else {
            hasil = suhu(t, s, d);
            printf("Hasil konversi suhu = %g %c\n", hasil, d);
        }

        printf("Coba lagi? (y/n) ");
        scanf(" %c", &ulang);
        printf("\n");
    } while (ulang == 'y' || ulang == 'Y');
    return 0;
}

float suhu(float t, char s, char d) {
    float c, k;

    switch (s) {
        case 'C': c = t; break;
        case 'R': c = t * 5 / 4; break;
        default:  c = (t - 32) * 5 / 9; break;
    }

    switch (d) {
        case 'C': k = c; break;
        case 'R': k = c * 4 / 5; break;
        default:  k = c * 9 / 5 + 32; break;
    }
    return k;
}

