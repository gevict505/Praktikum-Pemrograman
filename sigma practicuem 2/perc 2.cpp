#include <stdio.h>

int main(void)
{
    int a = 10; int b = 5; int c = 2;

    int hasil1 = a + b * c;
    int hasil2 = (a + b) * c;

    printf("hasil1 = %d\n", hasil1);
    printf("hasil2 = %d\n", hasil2);

    return 0;
}
