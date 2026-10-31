#include <stdio.h>

int main() {
	int a, b;
	int tambah, kurang, kali, bagi, sisa;
	
	printf("Masukkan nilai a: ");
	scanf("%d", &a);
	
	printf("Masukkan nilai b: ");
	scanf("%d", &b);
	
	tambah = a + b;
	kurang = a - b;
	kali = a * b;
	bagi = a / b;
	sisa = a % b;
	
	printf("Tambah: %d\n", tambah);
	printf("Kurang: %d\n", kurang);
	printf("Kali: %d\n", kali);
	printf("Bagi: %d\n", bagi);
	printf("Sisa: %d\n", sisa);
	
	return 0;
}
	

