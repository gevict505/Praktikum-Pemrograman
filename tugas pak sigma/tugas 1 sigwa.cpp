#include <iostream>

using namespace std;

int main() {
    double r = 7.0;
    double phi = 3.14;
    
    double luas_permukaan = 4 * phi * r * r;
    double volume = (4.0 / 3.0) * phi * r * r * r;
    
    printf("hasil perhitungan luas permukaan dan volume\n");
    
    cout << "Jari-jari: " << r << " cm" << endl;
    cout << "Luas permukaan: " << luas_permukaan << " cm^2" << endl;
    cout << "Volume: " << volume << " cm^3" << endl;
    
    return 0;
}
