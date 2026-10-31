#include <stdio.h>

int main() {
    float r, keliling, luas;
    float pi = 3.14;
    
    printf("Masukkan jari-jari lingkaran = ");
    scanf("%f", &r);
    
    keliling = 2 * pi * r;
    luas = pi * r * r;
    
    printf("Keliling lingkaran dengan jari-jari %.0f adalah = %.2f\n", r, keliling);
    printf("Luas Lingkaran dengan jari-jari %.0f adalah = %.2f\n", r, luas);
}
