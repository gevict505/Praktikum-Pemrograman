#include <stdio.h>
#define PI 3.14

int main() {
    float r = 7.0;
    float t = 24.0;
    float s = 25.0;
    
    float La = PI * r * r;
    float Ls = PI * r * s;
    float Lp = PI * r * (r + s);
    float V = (1.0 / 3.0) * PI * r * r * t;

    printf("r = %.2f\n", r);
    printf("t = %.2f\n", t);
    printf("s = %.2f\n", s);
    printf("Luas alas = %.2f\n", La);
    printf("Luas selimut = %.2f\n", Ls);
    printf("Luas permukaan = %.2f\n", Lp);
    printf("Volume = %.2f\n", V);

    return 0;
}
