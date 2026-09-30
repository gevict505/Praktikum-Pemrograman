#include <stdio.h>

int main(void)
{
    double celsius = 30;
    double fahrenheit;

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    printf("Celsius    = %.2f\n", celsius);
    printf("Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
