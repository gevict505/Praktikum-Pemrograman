#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define TOLERANSI 1e-9   // untuk membandingkan bilangan desimal

double terbesarDua(double x, double y) { return (x > y) ? x : y; }
double terkecilDua(double x, double y) { return (x < y) ? x : y; }

bool sisiPositif(double a, double b, double c) {
    return a > 0 && b > 0 && c > 0;
}

bool validSegitiga(double a, double b, double c) {
    if (!sisiPositif(a, b, c)) return false;
    return (a + b > c) && (a + c > b) && (b + c > a);
}

const char *jenisMenurutSisi(double a, double b, double c) {
    bool ab = fabs(a - b) < TOLERANSI;
    bool bc = fabs(b - c) < TOLERANSI;
    bool ac = fabs(a - c) < TOLERANSI;
    if (ab && bc) return "sama sisi";
    if (ab || bc || ac) return "sama kaki";
    return "sembarang";
}

const char *jenisMenurutSudut(double a, double b, double c) {
    double terpanjang = terbesarDua(a, terbesarDua(b, c));
    double terpendek = terkecilDua(a, terkecilDua(b, c));
    double tengah = a + b + c - terpanjang - terpendek;
    double kuadratPanjang = terpanjang * terpanjang;
    double jumlahKuadrat = terpendek * terpendek + tengah * tengah;
    if (fabs(kuadratPanjang - jumlahKuadrat) < TOLERANSI) return "siku-siku";
    if (kuadratPanjang < jumlahKuadrat) return "lancip";
    return "tumpul";
}

int main(void) {
    double a, b, c;
    printf("Masukkan tiga sisi: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Masukan tidak valid\n");
        return 1;
    }
    if (!sisiPositif(a, b, c)) {
        printf("Bukan segitiga: semua sisi harus bernilai positif\n");
        return 1;
    }
    if (!validSegitiga(a, b, c)) {
        printf("Bukan segitiga: jumlah dua sisi harus lebih besar dari sisi ketiga\n");
        return 1;
    }
    printf("Sisi membentuk segitiga yang valid\n");
    printf("Jenis menurut sisi  : segitiga %s\n", jenisMenurutSisi(a, b, c));
    printf("Jenis menurut sudut : segitiga %s\n", jenisMenurutSudut(a, b, c));
    return 0;
}