#include <stdio.h>

int fpb(int a, int b) {
    while (b != 0) {
        int sisa = a % b;
        a = b;
        b = sisa;
    }
    return a;
}

int main(void) {
    printf("FPB(150, 35) = %d\n", fpb(150, 35));
    printf("FPB(1026, 405) = %d\n", fpb(1026, 405));
    printf("FPB(83, 240) = %d\n", fpb(83, 240));
    return 0;
}
