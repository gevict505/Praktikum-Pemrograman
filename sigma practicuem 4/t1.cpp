#include <stdio.h>
int main(void) {
    int bil;
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &bil);
    if (bil % 2 == 0) {
        printf("Bilangan %d adalah Genap\n", bil);
    } else {
        printf("Bilangan %d adalah Ganjil\n", bil);
    }
    return 0;
}
