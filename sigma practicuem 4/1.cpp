#include <stdio.h>

int main(void) {

    int pembilang, penyebut, sisa;

    printf("Masukkan Pembilang: ");
    scanf("%d", &pembilang);

    printf("Masukkan Penyebut:");
    scanf("%d", &penyebut);
    
    if (penyebut == 0) {
        printf("Penyebut tidak boleh 0.\n");
    } else {
        sisa = pembilang % penyebut;
        
        if (sisa != 0)
            printf("%d tidak habis dibagi %d, sisa = %d\n", pembilang, penyebut, sisa);
        else
            printf("%d habis dibagi %d\n", pembilang, penyebut);   
    } 
    return 0;
}