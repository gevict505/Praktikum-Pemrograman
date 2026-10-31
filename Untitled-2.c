#include <stdio.h>
#include <math.h>

int main() {
    // Menyiapkan variabel yang dibutuhkan
    float r, T, a, b, c;
    float L_tabung, V_tabung, V_bola;
    float y1, y2;
    float phi = 3.14;

    printf("=== MENGHITUNG TABUNG DAN BOLA ===\n");
    printf("Masukkan nilai jari-jari (r): ");
    scanf("%f", &r);
    printf("Masukkan nilai tinggi (T): ");
    scanf("%f", &T);

    // 1. Rumus Luas Tabung: L = 2.phi.r.T + 2.phi.r^2
    L_tabung = (2 * phi * r * T) + (2 * phi * r * r);
    printf("Luas Tabung = %f\n", L_tabung);

    // 2. Rumus Volume Tabung: V = phi.r^2.T
    V_tabung = phi * r * r * T;
    printf("Volume Tabung = %f\n", V_tabung);

    // 3. Rumus Volume Bola: V = 4/3.phi.r^3c
    V_bola = (4.0 / 3.0) * phi * r * r * r;
    printf("Volume Bola = %f\n\n", V_bola);


    printf("=== MENGHITUNG RUMUS KUADRAT ===\n");
    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    printf("Masukkan nilai c: ");
    scanf("%f", &c);

    // 4. Rumus Kuadrat (ABC)
    // Akar dari b^2 - 4ac dihitung menggunakan fungsi sqrt()
    y1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    y2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    printf("Hasil y1 = %f\n", y1);
    printf("Hasil y2 = %f\n", y2);

    return 0;
}