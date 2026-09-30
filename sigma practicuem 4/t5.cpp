#include <stdio.h>
int main(void) {
    float nilai;
    printf("Masukkan nilai (0-100): ");
    scanf("%f", &nilai);

    if (nilai < 0 || nilai > 100) {  
        printf("Nilai yang diinputkan tidak valid\n");
    } else if (nilai >= 85) {
        printf("Grade A\n");
    } else if (nilai >= 75) {
        printf("Grade B\n");
    } else if (nilai >= 65) {
        printf("Grade C\n");
    } else if (nilai >= 50) {
        printf("Grade D\n");
    } else {
        printf("Grade E\n");
    }
    return 0;
}
