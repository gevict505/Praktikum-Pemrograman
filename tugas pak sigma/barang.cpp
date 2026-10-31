#include <stdio.h>

int main()
{
    float h_cpu = 4530000, diskon_cpu = 0.15;
    float h_ram = 2795000, diskon_ram = 0.08;
    float h_board = 4940000, diskon_board = 0.10;
    
    printf("Nama Barang\t\tHarga\t\tDiskon\tTotal\n");
    printf("CPU Intel Core 7\t%.0f\t\t15%%\t%.0f\n", h_cpu, h_cpu - (h_cpu * diskon_cpu));
    printf("RAM DDR5 16GB\t\t%.0f\t\t8%%\t%.0f\n", h_ram, h_ram - (h_ram * diskon_ram));
    printf("MB ASUS ROG\t\t%.0f\t\t10%%\t%.0f\n", h_board, h_board - (h_board * diskon_board));
    
    return 0;
}
