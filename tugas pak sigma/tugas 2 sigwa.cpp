#include <stdio.h>
#define PI 3.14

int main() {
    float r = 7.0;
    float t = 15.0;
    
    float La = PI * r * r;
    float Ls = 2 * PI * r * t;
    float Lp = 2 * PI * r * (r + t);
    float V = PI * r * r * t;

    printf("Luas Alas = %.2f\n", La);
    printf("Luas Selimut = %.2f\n", Ls);
    printf("Luas Permukaan = %.2f\n", Lp);
    printf("Volume = %.2f\n", V);

    return 0;
}
