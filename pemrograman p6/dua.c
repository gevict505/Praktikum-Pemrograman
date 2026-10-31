#include <stdio.h>

void hitung_triangular(int n) {
    int e, jumlah = 0;
    for (e = 1; e <= n; ++e) {
        jumlah = jumlah + e;
        printf("Jumlah triangular %d adalah %d\n", n, jumlah);
    }
}

void main(){
    hitung_triangular(10);
    hitung_triangular(20);
    hitung_triangular(50);
}