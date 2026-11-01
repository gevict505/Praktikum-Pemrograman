#include <stdio.h>
#include <math.h>

int main() {
    float r, T, a, b, c;
    float L_tabung, V_tabung, V_bola;
    float y1, y2;
    float phi = 3.14;

    printf("=== MENGHITUNG TABUNG DAN BOLA ===\n");
    printf("Masukkan nilai jari-jari (r): ");
    scanf("%f", &r);
    printf("Masukkan nilai tinggi (T): ");
    scanf("%f", &T);

    // Luas Tabung
    L_tabung = (2 * phi * r * T) + (2 * phi * r * r);
    printf("Luas Tabung = %f\n", L_tabung);

    // Volume Tabung
    V_tabung = phi * r * r * T;
    printf("Volume Tabung = %f\n", V_tabung);

    // Volume Bola
    V_bola = (4.0 / 3.0) * phi * r * r * r;
    printf("Volume Bola = %f\n\n", V_bola);


    printf("=== MENGHITUNG RUMUS KUADRAT ===\n");
    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    printf("Masukkan nilai c: ");
    scanf("%f", &c);

    // Rumus Kuadrat (ABC)
    y1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    y2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    printf("Hasil y1 = %f\n", y1);
    printf("Hasil y2 = %f\n", y2);

    printf("\nTekan Enter untuk keluar...");
    getchar(); 
    getchar();

    return 0;
}
