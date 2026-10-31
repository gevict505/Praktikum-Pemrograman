#include <stdio.h>
int main(void) {
    int a, b;
    printf("Masukkan dua bilangan integer (a dan b): ");
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf("Bilangan yang lebih besar: %d\n", a);
    } else if (b > a) {
        printf("Bilangan yang lebih besar: %d\n", b);
    } else {
        printf("Kedua bilangan sama\n");
    }
    return 0;
}
