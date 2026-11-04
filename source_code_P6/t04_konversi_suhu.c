#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

double keCelsius(double suhu, char asal) {
    if (asal == 'F') return (suhu - 32.0) * 5.0 / 9.0;
    if (asal == 'R') return suhu * 5.0 / 4.0;
    return suhu;                       // asal 'C'
}

double dariCelsius(double celsius, char tujuan) {
    if (tujuan == 'F') return celsius * 9.0 / 5.0 + 32.0;
    if (tujuan == 'R') return celsius * 4.0 / 5.0;
    return celsius;                    // tujuan 'C'
}

double konversiSuhu(double suhu, char asal, char tujuan) {
    return dariCelsius(keCelsius(suhu, asal), tujuan);
}

bool satuanValid(char satuan) {
    return satuan == 'C' || satuan == 'F' || satuan == 'R';
}

int main(void) {
    double suhu;
    char asal, tujuan;

    printf("Masukkan suhu: ");
    if (scanf("%lf", &suhu) != 1) {
        printf("Masukan suhu tidak valid\n");
        return 1;
    }
    printf("Satuan asal (C/F/R): ");
    scanf(" %c", &asal);
    printf("Satuan tujuan (C/F/R): ");
    scanf(" %c", &tujuan);
    asal = (char)toupper((unsigned char)asal);
    tujuan = (char)toupper((unsigned char)tujuan);

    if (!satuanValid(asal) || !satuanValid(tujuan)) {
        printf("Satuan tidak dikenal, gunakan C, F, atau R\n");
        return 1;
    }

    if (keCelsius(suhu, asal) < -273.15 - 1e-9) {
        printf("Suhu di bawah nol mutlak tidak mungkin\n");
        return 1;
    }

    printf("%.2f %c = %.2f %c\n", suhu, asal, konversiSuhu(suhu, asal, tujuan), tujuan);
    return 0;
}
