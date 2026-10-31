#include <stdio.h>

int main() {
    int pilihan;
    
    printf("=== PROGRAM INTEGRASI TUGAS 4 ===\n");
    printf("1. Cek Bilangan Ganjil/Genap\n");
    printf("2. Cek Kelompok Karakter\n");
    printf("3. Cek Tahun Kabisat\n");
    printf("4. Keluar Program\n");
    printf("Masukkan pilihan Anda (1-4): ");
    scanf("%d", &pilihan);
    printf("---------------------------------\n");


    switch (pilihan) {
        case 1: {
            int bilangan;
            printf("Masukkan bilangan bulat: ");
            scanf("%d", &bilangan);
            
            if (bilangan % 2 == 0) {
                printf("%d adalah bilangan genap.\n", bilangan);
            } else {
                printf("%d adalah bilangan ganjil.\n", bilangan);
            }
            break;
        }
        case 2: {
           
            char ch;
            printf("Masukkan suatu karakter: ");
            scanf(" %c", &ch);
            
            if (ch >= 'a' && ch <= 'z') {
                printf("Karakter '%c' termasuk huruf kecil.\n", ch);
            } else if (ch >= 'A' && ch <= 'Z') {
                printf("Karakter '%c' termasuk huruf besar.\n", ch);
            } else if (ch >= '0' && ch <= '9') {
                printf("Karakter '%c' termasuk angka.\n", ch);
            } else {
                printf("Karakter '%c' termasuk karakter khusus.\n", ch);
            }
            break;
        }
        case 3: {
          
            int tahun;
            printf("Masukkan tahun (1900-2400): ");
            scanf("%d", &tahun);
            
            if (tahun >= 1900 && tahun <= 2400) {
                if ((tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0)) {
                    printf("%d adalah Tahun Kabisat.\n", tahun);
                } else {
                    printf("%d bukan Tahun Kabisat.\n", tahun);
                }
            } else {
                printf("Tahun di luar batas input yang diizinkan.\n");
            }
            break;
        }
        case 4: {
           
            printf("Terima kasih telah menggunakan program ini!\n");
            break;
        }
        default:
           
            printf("Pesan Kesalahan: Pilihan '%d' tidak tersedia di dalam menu.\n", pilihan);
            break;
    }

    return 0;
}
