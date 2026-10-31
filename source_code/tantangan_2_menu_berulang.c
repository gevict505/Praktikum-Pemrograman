#include <stdio.h>

int main(void) {
    int pilihan, sisi, bil, i;

    do {
        printf("\n=== MENU UTAMA ===\n");
        printf("1. Hitung luas persegi\n");
        printf("2. Cek bilangan ganjil atau genap\n");
        printf("3. Tampilkan angka 1 sampai n\n");
        printf("0. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Masukkan panjang sisi: ");
                scanf("%d", &sisi);
                printf("Luas persegi = %d\n", sisi * sisi);
                break;
            case 2:
                printf("Masukkan bilangan: ");
                scanf("%d", &bil);
                if (bil % 2 == 0) {
                    printf("%d adalah bilangan genap.\n", bil);
                } else {
                    printf("%d adalah bilangan ganjil.\n", bil);
                }
                break;
            case 3:
                printf("Masukkan n: ");
                scanf("%d", &bil);
                for (i = 1; i <= bil; i++) {
                    printf("%d ", i);
                }
                printf("\n");
                break;
            case 0:
                printf("Program selesai. Terima kasih.\n");
                break;
            default:
                printf("Pilihan tidak tersedia.\n");
        }
    } while (pilihan != 0);

    return 0;
}