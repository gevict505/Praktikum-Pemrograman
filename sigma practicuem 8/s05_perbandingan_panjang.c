#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <string.h>

int main(void) {
    char nama[20] = "Budi";
    char kata[10] = {'K', 'A', 'M', 'U', '\0'};
    char tanpaNull[4] = {'A', 'B', 'C', 'D'};   /* bukan string valid */
    const char *penunjuk = "Budi";

    printf("nama       : strlen = %zu, sizeof = %zu, "
           "strnlen(.., 3) = %zu\n",
           strlen(nama), sizeof nama, strnlen(nama, 3));
    printf("kata       : strlen = %zu, sizeof = %zu\n",
           strlen(kata), sizeof kata);
    printf("tanpaNull  : strnlen(.., sizeof) = %zu, sizeof = %zu\n",
           strnlen(tanpaNull, sizeof tanpaNull), sizeof tanpaNull);
    printf("penunjuk   : strlen = %zu, sizeof = %zu\n",
           strlen(penunjuk), sizeof penunjuk);
    return 0;
}
