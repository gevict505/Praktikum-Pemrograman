#include <stdio.h>

int main(void) {
    int n;
    long faktorial = 1;
    char label[8];

    printf("TABEL 10 FAKTORIAL PERTAMA\n");
    printf("+----+------+-----------+\n");
    printf("|  n |  n!  |   Hasil   |\n");
    printf("+----+------+-----------+\n");
    for (n = 1; n <= 10; n++) {
        faktorial *= n;                     
        sprintf(label, "%d!", n);
        printf("| %2d | %-4s | %9ld |\n", n, label, faktorial);
    }
    printf("+----+------+-----------+\n");
    return 0;
}