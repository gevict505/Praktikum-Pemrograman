#include <stdio.h>

double terbesarTiga(double a, double b, double c) {
    double terbesar = a;              
    if (b > terbesar) terbesar = b;
    if (c > terbesar) terbesar = c;
    return terbesar;
}

int main(void) {
    double a, b, c;
    printf("Masukkan tiga bilangan: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Masukan tidak valid\n");
        return 1;
    }
    printf("Bilangan terbesar = %g\n", terbesarTiga(a, b, c));
    return 0;
}
