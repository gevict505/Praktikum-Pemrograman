
#include <stdio.h>

int main() {
    long harga1 = 4530000;
    long harga2 = 2795000;
    long harga3 = 4940000;

    int diskon1 = 15;
    int diskon2 = 8;
    int diskon3 = 10;

    long jumlah1 = harga1 - (harga1 * diskon1 / 100);
    long jumlah2 = harga2 - (harga2 * diskon2 / 100);
    long jumlah3 = harga3 - (harga3 * diskon3 / 100);

    long total_bayar = jumlah1 + jumlah2 + jumlah3;

    // MENCETAK TABEL
    printf("========================================================================================================\n");
    
    // Header tabel
    printf("| %-2s | %-45s | %-12s | %-6s | %-17s |\n", 
           "No", "Nama Barang", "Harga", "Diskon", "Jumlah");
           
    printf("========================================================================================================\n");

    // Isi tabel baris 1-3
    printf("| %-2d | %-45s | Rp %-9ld | %-5d%% | Rp %-14ld |\n", 
           1, "CPU Intel Core Ultra 7 270K Plus", harga1, diskon1, jumlah1);
           
    printf("| %-2d | %-45s | Rp %-9ld | %-5d%% | Rp %-14ld |\n", 
           2, "RAM DDR5 SINGLE 16GB 5600MHz", harga2, diskon2, jumlah2);
           
    printf("| %-2d | %-45s | Rp %-9ld | %-5d%% | Rp %-14ld |\n", 
           3, "Mainboard ASUS ROG STRIX B860-F GAMING WIFI", harga3, diskon3, jumlah3);
           
    printf("========================================================================================================\n");

    // Mencetak Total Bayar
    printf("| %-73s | Rp %-14ld |\n", "TOTAL HARGA YANG HARUS DIBAYAR", total_bayar);
    printf("========================================================================================================\n");

    printf("\nTekan Enter untuk keluar...");
    getchar();

    return 0;
}
