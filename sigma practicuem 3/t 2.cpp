#include <stdio.h>
int main(void) {
    int num;
    printf("Masukkan bilangan: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("Genap\n");
    } else {
        printf("Ganjil\n");
    }
    return 0;
}

