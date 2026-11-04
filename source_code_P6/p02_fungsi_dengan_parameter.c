#include <stdio.h>

int jumlahSampai(int n) {
    int jumlah = 0;
    for (int i = 1; i <= n; ++i) {
        jumlah += i;
    }
    return jumlah;
}

int main(void) {
    printf("%d\n", jumlahSampai(10));
    printf("%d\n", jumlahSampai(20));
    printf("%d\n", jumlahSampai(50));
    return 0;
}
    