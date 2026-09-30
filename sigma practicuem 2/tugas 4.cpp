#include <stdio.h>

int main(void)
{
    double jarak = 150;
    double waktu = 2.5;
    double kecepatan;

    kecepatan = jarak / waktu;

    printf("Jarak     = %.2f km\n", jarak);
    printf("Waktu     = %.2f jam\n", waktu);
    printf("Kecepatan = %.2f km/jam\n", kecepatan);

    return 0;
}
