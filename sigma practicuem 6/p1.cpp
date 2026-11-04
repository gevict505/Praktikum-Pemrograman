#include <iostream>
using namespace std;

void tampilkanpesan();

int main(){
    for (int i = 1; i <= 5; i++) {
        std::cout << "Pesan ke-" << i << ": ";
        tampilkanpesan();
    }
    return 0;
}

void tampilkanpesan(){
    std::cout << "Belajar fungsi C++\n";
}
