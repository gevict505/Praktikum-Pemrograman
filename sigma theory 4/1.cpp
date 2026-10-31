#include <stdio.h>
int main() {
    int bilangan;
    printf("Masukkan bilangan bulat = ");
    scanf("%d", &bilangan);
    if (bilangan % 2 == 0) {
        printf("bilangan bulat genap\n");
    } else {
        printf("bilangan bulat ganjil\n");
    }
    return 0;
}
