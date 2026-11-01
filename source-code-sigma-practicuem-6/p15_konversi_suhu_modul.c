#include <stdio.h>

double suhu(float t, char s, char d) {
    double k = 0;

    switch (s) {
        case 'C':
            if (d == 'R')
                k = 4. / 5. * t;
            else
                k = 9. / 5. * t + 32;
            break;
        case 'R':
            if (d == 'C')
                k = 5. / 4. * t;
            else
                k = 9. / 4. * t + 32;
            break;
        case 'F':
            if (d == 'C')
                k = 5. / 9. * (t - 32);
            else
                k = 4. / 9. * (t - 32);
            break;
    }

    return k;
}

int main(void) {
    int t;
    char s, d, yes = 'y';

    while (yes == 'y') {
        printf("Masukkan suhu (contoh: 100 C) = ");
        scanf("%d %c", &t, &s);
        printf("Masukkan satuan tujuan (C, R, F) = ");
        scanf(" %c", &d);
        printf("Hasil konversi suhu = %lf", suhu(t, s, d));
        printf("\nCoba lagi? (y/n) ");
        scanf(" %c", &yes);
        puts("\n\n\n");
    }

    return 0;
}
