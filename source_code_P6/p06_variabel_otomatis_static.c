#include <stdio.h>

void demo(void) {
    int otomatis = 0;       
    static int tetap = 0;    
    ++otomatis;
    ++tetap;
    printf("otomatis=%d, static=%d\n", otomatis, tetap);
}

int main(void) {
    for (int i = 0; i < 3; ++i) demo();
    for (int i = 0; i < 3; ++i) demo();
    return 0;
}
