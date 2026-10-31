#include <stdio.h>

int main() {

    float F, C;
    printf("Masukkan suhu dalam Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) * 5 / 9;
    printf("Suhu dalam Celsius: %.2f\n", C);

}
