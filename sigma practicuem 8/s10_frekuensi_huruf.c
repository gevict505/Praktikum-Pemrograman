#include <stdio.h>
#include <ctype.h>

int main(void) {
    char kalimat[200];
    int frekuensi[26] = {0};

    printf("Masukkan kalimat: ");
    if (fgets(kalimat, sizeof kalimat, stdin) == NULL) return 1;

    for (int i = 0; kalimat[i] != '\0'; i++) {
        unsigned char c = (unsigned char)kalimat[i];
        if (isalpha(c))
            frekuensi[tolower(c) - 'a']++;
    }

    for (int k = 0; k < 26; k++)
        if (frekuensi[k] > 0)
            printf("%c : %d\n", 'a' + k, frekuensi[k]);
    return 0;
}