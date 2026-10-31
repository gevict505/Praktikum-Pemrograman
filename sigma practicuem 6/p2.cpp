#include <iostream>

int JumlahSampai(int n) {
    int Jumlah = 0;
    for (int i = 1; i <= n; i++){
        Jumlah += i;
    }
    return Jumlah;
}

int main (){
    std::cout << JumlahSampai(10) << '\n';
    std::cout << JumlahSampai(20) << '\n';
    std::cout << JumlahSampai(50) << '\n';
    return 0;
}