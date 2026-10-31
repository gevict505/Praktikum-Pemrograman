#include <stdio.h>

int main() {
    int A, B, C, D, x, y, maks;
    printf("Masukkan nilai A = "); scanf("%d", &A);
    printf("Masukkan nilai B = "); scanf("%d", &B);
    printf("Masukkan nilai C = "); scanf("%d", &C);
    printf("Masukkan nilai D = "); scanf("%d", &D);
    
    x = (A > B) ? A : B;
    printf("Nilai A lebih %s dari pada B\n", (A > B) ? "besar" : "kecil");
    
    y = (C > D) ? C : D;
    printf("Nilai C lebih %s dari pada D\n", (C > D) ? "besar" : "kecil");
    
    maks = (x > y) ? x : y;
    printf("Jadi nilai maksimun adalah %d\n", maks);
    return 0;
}
