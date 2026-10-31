#include <stdio.h>
int main()
{
	
	float h_cpu=4530000;
	float h_ram=2795000;
	float h_mainboard=4940000;
	
	float harga_cpu = h_cpu - (h_cpu * 0.015);
	float harga_ram = h_ram - (h_ram * 0.08);
	float harga_mainboard = h_mainboard - (h_mainboard * 0.010);
	
	printf("%-3d | %-40s | %-12d | %-8s | %-12d\n", "No", "Nama Barang", "Harga Asli", "Diskon", "Harga Total");
	printf("------------------------------------------------------------------------------------------------\n");
	
	printf("%-3d | %-40s | %-12d | %-8s | %-12d\n", 1. ("CPU Intel Core Ultra 7 270k Plus\n", (int)h_cpu, "15%", (int)harga_cpu);
	printf("%-3d | %-40s | %-12d | %-8s | %-12d\n", 2. ("RAM DDR5 Single 16GB 5600MHz\n", (int)h_ram, "8%", (int)harga_ram);
	printf("%-3d | %-40s | %-12d | %-8s | %-12d\n", 3. ("Mainboard ASUS ROG STRIX B860-F Gaming WIFI\t%0f\t10%%\t%f\n",h_mainboard,harga_mainboard);
	return 0;
	
}
