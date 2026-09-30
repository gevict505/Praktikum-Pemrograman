#include <stdio.h>

int main(void)
{
    double p = 15;
    double l = 8;
    double luas, keliling;

    luas = p * l;
    keliling = 2 * (p + l);

    printf("Panjang  = %.2f\n", p);
    printf("Lebar    = %.2f\n", l);
    printf("Luas     = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}
