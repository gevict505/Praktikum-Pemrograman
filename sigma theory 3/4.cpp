#include <stdio.h>
int main() {
    int a, b;
    printf("Masukkan a: "); scanf("%d", &a);
    printf("Masukkan b: "); scanf("%d", &b);
    printf("a & b  = %d\n", a & b);
    printf("a | b  = %d\n", a | b);
    printf("a ^ b  = %d\n", a ^ b);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);
    return 0;
}

