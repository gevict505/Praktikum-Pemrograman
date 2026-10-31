#include <stdio.h>
#include <math.h>
int main(void) {
    double A, B, C, D, x1, x2, real, imajiner;

    printf("Persamaan Ax^2 + Bx + C = 0\n");
    printf("Masukkan A, B, C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    if (A == 0) {
        printf("A = 0, bukan persamaan kuadrat\n");
    } else {
        D = B * B - 4 * A * C;
        printf("Determinan D = %.2f\n", D);

        if (D > 0) {
            x1 = (-B + sqrt(D)) / (2 * A);
            x2 = (-B - sqrt(D)) / (2 * A);
            printf("Dua akar real berbeda:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } else if (D == 0) {
            x1 = -B / (2 * A) + 0.0;
            printf("Satu akar real kembar:\n");
            printf("x1 = x2 = %.2f\n", x1);
        } else {
            real = -B / (2 * A) + 0.0;
            imajiner = sqrt(-D) / (2 * fabs(A));
            printf("Dua akar kompleks:\n");
            printf("x1 = %.2f + %.2fi\n", real, imajiner);
            printf("x2 = %.2f - %.2fi\n", real, imajiner);
        }
    }
    return 0;
}
