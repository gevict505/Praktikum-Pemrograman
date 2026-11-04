#include <stdio.h>

double minimum(double x, double y) {
    if (x < y) return x;
    return y;
}

int main(void) {
    double a, b;
    printf("Masukkan dua bilangan: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Masukan tidak valid\n");
        return 1;
    }
    printf("Nilai minimum = %g\n", minimum(a, b));
    return 0;
}
