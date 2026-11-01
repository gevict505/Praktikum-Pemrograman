#include <stdio.h>

int fibonacci(int x) {
    if ((x == 1) || (x == 0)) {
        return x;
    } else {
        return fibonacci(x - 1) + fibonacci(x - 2);   /* rekursi */
    }
}

int main(void) {
    int x, i = 0;

    printf("Masukkan nilai maksimum: ");
    scanf("%d", &x);

    printf("\nDeret Fibonacci: ");
    while (i < x) {
        printf("%d, ", fibonacci(i));
        i++;
    }
    printf("\n");

    return 0;
}
