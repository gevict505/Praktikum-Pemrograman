#include <stdio.h>
#include <math.h>
int main() {
    float A, B, C, D, x1, x2;
    printf("Masukkan A, B, C: "); scanf("%f %f %f", &A, &B, &C);
    if (A == 0) return 0;
    
    D = (B*B) - (4*A*C);
    if (D > 0) {
        x1 = (-B + sqrt(D)) / (2*A); x2 = (-B - sqrt(D)) / (2*A);
        printf("Akar berbeda: x1=%g, x2=%g\n", x1, x2);
    } else if (D == 0) {
        x1 = -B / (2*A);
        printf("Akar kembar: x1=x2=%g\n", x1);
    } else {
        printf("Akar imajiner: %g + %gj dan %g - %gj\n", -B/(2*A), sqrt(-D)/(2*A), -B/(2*A), sqrt(-D)/(2*A));
    }
    return 0;
}
