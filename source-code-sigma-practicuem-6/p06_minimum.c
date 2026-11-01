#include <stdio.h>

float minimum(float x, float y) {
    if (x < y)
        return x;
    else
        return y;
}

int main(void) {
    float a, b;

    printf("Masukkan nilai a : ");
    scanf("%f", &a);
    printf("Masukkan nilai b : ");
    scanf("%f", &b);

    printf("\nBilangan terkecil antara %g dan %g adalah ", a, b);
    printf("%g\n\n", minimum(a, b));

    return 0;
}
