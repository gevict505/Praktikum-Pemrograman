#include <stdio.h>
int main(void) {
    int num;
    printf("Masukkan bilangan: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("Bilangan Positif\n");
    } else if (num < 0) {
        printf("Bilangan Negatif\n");
    } else {
        printf("Bilangan Nol\n");
    }
    return 0;
}
