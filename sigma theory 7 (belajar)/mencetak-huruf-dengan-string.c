#include <stdio.h>

int main() {
    char huruf[3][8][9] = {
    {
        "******* ",
        "******* ",
        "**      ",
        "**      ",
        "**  *** ",
        "**   ** ",
        "******* ",
        "        "
    },
    {
        " **     ",
        " **     ",
        " **     ",
        " **     ",
        " **     ",
        " ****** ",
        " ****** ",
        "        "
    },
    { 
        " ****** ",
        " **     ",
        " **     ",
        " ****** ",
        " **     ",
        " **     ",
        " ****** ",
        "        "
    }
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                if (huruf[i][j][k] == '*') {
                    putchar('\xDB');
                } else {
                    putchar(' ');
                }
            }
            puts(""); // Enter setelah selesai 1 baris
        }
        puts(""); // Enter pemisah antar-huruf
    }
    return 0;
}