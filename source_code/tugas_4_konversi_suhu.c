#include <stdio.h>

int main(void) {
    double awal, akhir, langkah, celsius;
    int banyak, i;

    printf("Suhu Celsius awal  : ");
    scanf("%lf", &awal);
    printf("Suhu Celsius akhir : ");
    scanf("%lf", &akhir);
    printf("Kenaikan (langkah) : ");
    scanf("%lf", &langkah);

    if (langkah <= 0 || awal > akhir || awal < -273.15) {
        printf("Masukan tidak valid ");
        printf("(langkah > 0, awal <= akhir, awal >= -273.15).\n");
        return 0;
    }

    banyak = (int)((akhir - awal) / langkah + 0.0001);   

    printf("\n+----------+------------+----------+----------+\n");
    printf("| Celsius  | Fahrenheit |  Reamur  |  Kelvin  |\n");
    printf("+----------+------------+----------+----------+\n");
    for (i = 0; i <= banyak; i++) {
        celsius = awal + i * langkah;
        printf("| %8.2f | %10.2f | %8.2f | %8.2f |\n",
               celsius,
               celsius * 9.0 / 5.0 + 32.0,     
               celsius * 4.0 / 5.0,          
               celsius + 273.15);            
    }
    printf("+----------+------------+----------+----------+\n");
    return 0;
}