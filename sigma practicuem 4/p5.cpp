#include <stdio.h>
int main(void) {
    char tag;
    printf("Masukkan tipe tag (2/4): "); scanf("%c", &tag);
    if (tag == '2') {
        printf("Merek sepeda motor bertipe 2 tag:\n");
        printf("1. YAMAHA\n2. SUZUKI\n3. HONDA\n");
    } else {
        printf("Merek sepeda motor bertipe 4 tag:\n");
        printf("1. HONDA\n2. SUZUKI\n3. YAMAHA\n");
    }
    return 0;
}
