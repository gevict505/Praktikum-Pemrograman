#include <stdio.h>

int main() {
    int teori, praktik;
    printf("Masukkan nilai teori: "); scanf("%d", &teori);
    printf("Masukkan nilai praktik: "); scanf("%d", &praktik);
    
    printf("Nilai Teori   : %d\n", teori);
    printf("Nilai Praktik : %d\n", praktik);
    printf("Status Akhir  : %s\n", (teori >= 60 && praktik >= 60) ? "LULUS" : "TIDAK LULUS");
    
    return 0;
}
