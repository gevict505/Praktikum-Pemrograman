#include <stdio.h>

int main(void)
{
    double s = 10;
    double luas_permukaan, volume;

    luas_permukaan = 6 * s * s;
    volume = s * s * s;

    printf("Sisi           = %.2f\n", s);
    printf("Luas permukaan = %.2f\n", luas_permukaan);
    printf("Volume         = %.2f\n", volume);

    return 0;
}
