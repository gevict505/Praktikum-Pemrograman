#include <iostream>
using namespace std;

int kabisat(int tahun) {
    if (tahun % 400 == 0){
        tahun = 1;
    } else if (tahun % 4 == 0 && tahun % 100 != 0) {
        tahun = 1;
    } else {
        tahun = 0;
    }
    return tahun;
}

int main(){
    
    double input, tahun;
    cout << "Masukkan tahun (1900-2400) = ";
    cin >> tahun;

    if (input < 1900 || input > 2400) {
        cout << "Tahun di luar batas!" << endl;
        return 1;
    }

    cout << "Tahun " << input << " " << (kabisat(input) > 0 ? "adalah" : "bukan") << " tahun kabisat" << endl;

    cin.get();
    return 0;
}
