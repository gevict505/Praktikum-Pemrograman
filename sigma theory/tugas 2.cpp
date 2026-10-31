#include <stdio.h>

int main() {
    float x, y, z;
    
    printf("Masukkan nilai = ");
    scanf("%f", &x);
    
    //Formula 1
    y = 3 * x * x + 6 * x + 9;
    
    //Formula 2
    z = (2 * y * y + 5 * x * x) / (9 * y);
    
    printf("Didapatkan nilai y = %.0f dan nilai z = %f\n", y, z);
}
