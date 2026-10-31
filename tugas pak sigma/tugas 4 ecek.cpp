#include <stdio.h>

int main ()
{
    // Deklarasi dan inisiasi harga asli
    float h_cpu = 4530000;
    float h_ram = 2795000;
    float h_mainboard = 4940000;
    
    // Perhitungan harga setelah diskon
    float harga_cpu = h_cpu - (h_cpu * 0.15);         // Diskon 15%
    float harga_ram = h_ram - (h_ram * 0.08);         // Diskon 8%
    float harga_mainboard = h_mainboard - (h_mainboard * 0.10); // Diskon 10%
    
    // MENCETAK HEADER TABEL
    // %-3s artinya menyiapkan 3 spasi untuk teks (rata kiri), %-40s menyiapkan 40 spasi, dst.
    printf("%-3s | %-40s | %-12s | %-8s | %-12s\n", "No", "Nama Barang", "Harga Asli", "Diskon", "Harga Diskon");
    printf("--------------------------------------------------------------------------------------\n");
    
   
    printf("%-3d | %-40s | %-12d | %-8s | %-12d\n", 1, "CPU Intel Core Ultra 7 270k Plus", (int)h_cpu, "15%", (int)harga_cpu);
    printf("%-3d | %-40s | %-12d | %-8s | %-12d\n", 2, "RAM DDR5 Single 16GB 5600MHz", (int)h_ram, "8%", (int)harga_ram);
    printf("%-3d | %-40s | %-12d | %-8s | %-12d\n", 3, "Mainboard ASUS ROG STRIX B860-F Gaming", (int)h_mainboard, "10%", (int)harga_mainboard);
    
    return 0;
}
