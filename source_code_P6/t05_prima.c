#include <stdio.h>
#include <stdbool.h>

// true jika n bilangan prima
bool prima(int n) {
    if (n < 2) return false;           // 0, 1, dan negatif bukan prima
    if (n == 2) return true;
    if (n % 2 == 0) return false;      // bilangan genap selain 2
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(void) {
    int n;
    printf("Masukkan bilangan bulat: ");
    if (scanf("%d", &n) != 1) {
        printf("Masukan tidak valid\n");
        return 1;
    }
    if (n < 2) {
        printf("%d bukan bilangan prima (kurang dari 2)\n", n);
    } else if (prima(n)) {
        printf("%d adalah bilangan prima\n", n);
    } else {
        printf("%d bukan bilangan prima (bilangan komposit)\n", n);
    }
    return 0;
}