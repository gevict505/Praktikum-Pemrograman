#include <stdio.h>

int main(void) {
    int pilihan;
    float panjang, lebar, luas;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Tampilkan pesan\n");
        printf("2. Tampilkan angka 1-5\n");
        printf("3. Hitung luas persegi panjang\n");
        printf("0. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            printf("Praktikum Pemrograman Dasar\n");
        } else if (pilihan == 2) {
            printf("1 2 3 4 5\n");
        } else if (pilihan == 3) {
            printf("Masukkan panjang: ");
            scanf("%f", &panjang);
            printf("Masukkan lebar: ");
            scanf("%f", &lebar);
            luas = panjang * lebar;
            printf("Luas = %.2f\n", luas);
        } else if (pilihan != 0) {
            printf("Pilihan tidak tersedia.\n");
        }
    } while (pilihan != 0);

    printf("Program selesai.\n");
    return 0;
}
