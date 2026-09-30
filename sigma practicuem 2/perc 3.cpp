#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 2;

    double hasil1;
    double hasil2;
    double hasil3;

    hasil1 = a / b;
    hasil2 = 5.0 / 2.0;
    hasil3 = (double)a / b;

    printf("a / b          = %.2f\n", hasil1);
    printf("5.0 / 2.0      = %.2f\n", hasil2);
    printf("(double)a / b  = %.2f\n", hasil3);

    return 0;
}
