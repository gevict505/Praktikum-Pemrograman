#include <stdio.h>
#include <string.h>

int main(void){
    char depan[80] = "Struktur Data ";
    char belakang[] = "Lanjut";
    char salinan[80];

    strcpy(salinan, depan);
    printf("Hasil salinan : %s\n", salinan);
    strcat(salinan, belakang);
    printf("Hasil gabungan: %s\n", salinan);

    return 0;
}