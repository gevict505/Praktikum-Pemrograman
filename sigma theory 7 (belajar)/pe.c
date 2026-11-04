#include <stdio.h>

int main(){

    int nomor[] = {197, -100, 350, 400};
    char nilai[] = {'A', 'B', 'C'};
   
    int size = sizeof(nomor) / sizeof(nomor[0]);\

    for (int i = 0; i < size; i++){
        printf("%\n", nomor[i]);
    }
    return 0;
}