#include <stdio.h>
int main(void) {
    char op;
    float bil1, bil2, hasil;

    printf("Masukkan: bilangan1 operator bilangan2\n");
    printf("Operator: + - * /\n");
    printf("Input: ");
    scanf("%f %c %f", &bil1, &operator, &bil2);

    switch (operator) {
    case '+':
        hasil = bil1 + bil2;
        break;
    case '-':
        hasil = bil1 - bil2;
        break;
    case '*':
        hasil = bil1 * bil2;
        break;
    case '/':
        if (bil2 == 0) {            /* cegah pembagian dengan nol */
            printf("Pembagian dengan nol tidak diperbolehkan.\n");
            return 0;
        }
        hasil = bil1 / bil2;
        break;
    default:                        /* operator selain + - * / */
        printf("Operator tidak valid.\n");
        return 0;
    }
    printf("Hasil: %.2f %c %.2f = %.2f\n", bil1, op, bil2, hasil);
    return 0;
}
