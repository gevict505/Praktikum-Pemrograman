#include <stdio.h>
int main() {
    float bil, acc = 0; char op;
    printf("Mulai perhitungan\n");
    while (1) {
        scanf("%f %c", &bil, &op);
        switch (op) {
            case 'S': acc = bil; break;
            case '+': acc += bil; break;
            case '-': acc -= bil; break;
            case '*': acc *= bil; break;
            case '/': 
                if (bil == 0) printf("Error: Pembagian dengan 0!\n");
                else acc /= bil; 
                break;
            case 'E': printf("= %g\nAkhir perhitungan\n", acc); return 0;
        }
        printf("= %g\n", acc);
    }
}
