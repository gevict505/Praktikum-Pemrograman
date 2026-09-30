#include <stdio.h>
int main(void) {
    char op;
    float bil1, bil2, hasil;
    printf("Masukkan: bilangan1 operator bilangan2\nOperator: + - * /\nInput: ");
    scanf("%f %c %f", &bil1, &op, &bil2);
    if (op == '*') hasil = bil1 * bil2;
    else if (op == '/') hasil = bil1 / bil2;
    else if (op == '+') hasil = bil1 + bil2;
    else if (op == '-') hasil = bil1 - bil2;
    else { printf ("Operator tidak dikenali.\n"); return 0; }
    printf("Hasil: %.2f %c %.2f = %.2f\n", bil1, op, bil2, hasil);
    return 0;
}
