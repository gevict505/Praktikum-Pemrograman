#include <stdio.h>

int main() {
    int jam, menit, total_menit;
    
    printf("Program konversi jam ke menit\n");
    printf("Masukkan jam dan menit (jj:mm) = ");
    
    scanf("%d:%d", &jam, &menit);
    
    total_menit = (jam * 60) + menit;
    
    printf("Jam %d:%02d adalah setara dengan %d menit\n", jam, menit, total_menit);
}
