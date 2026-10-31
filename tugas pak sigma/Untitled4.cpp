#include <iostream>
#include <cmath> // Wajib disertakan untuk fungsi pow() dan sqrt()

using namespace std;

int main() {
    // Mendefinisikan nilai Pi
    const double PI = 3.14159265;

    cout << "=== TUGAS 1: KONVERSI RUMUS ===" << endl;

    // --- 1 & 2. LUAS DAN VOLUME TABUNG ---
    double r_tabung = 7.0;  // Contoh jari-jari tabung
    double T = 10.0;        // Contoh tinggi tabung
    
    double L_tabung = 2 * PI * r_tabung * T + 2 * PI * pow(r_tabung, 2);
    double V_tabung = PI * pow(r_tabung, 2) * T;
    
    cout << "\n1. Luas Tabung   : " << L_tabung;
    cout << "\n2. Volume Tabung : " << V_tabung;

    // --- 3. VOLUME BOLA ---
    double r_bola = 10.0;   // Contoh jari-jari bola
    
    // Ingat: Gunakan 4.0/3.0, BUKAN 4/3
    double V_bola = (4.0 / 3.0) * PI * pow(r_bola, 3);
    
    cout << "\n3. Volume Bola   : " << V_bola;

    // --- 4. RUMUS KUADRAT (Rumus abc) ---
    // Contoh persamaan: x^2 + 5x + 6 = 0
    double a = 1.0;
    double b = 5.0;
    double c = 6.0;
    
    double diskriminan = pow(b, 2) - 4 * a * c;
    
    // Memeriksa apakah diskriminan negatif (akar imajiner)
    if (diskriminan >= 0) {
        double y1 = (-b + sqrt(diskriminan)) / (2 * a);
        double y2 = (-b - sqrt(diskriminan)) / (2 * a);
        cout << "\n4. Akar Kuadrat  : y1 = " << y1 << ", y2 = " << y2 << endl;
    } else {
        cout << "\n4. Akar Kuadrat  : Hasil imajiner (diskriminan < 0)" << endl;
    }

    return 0;
}
