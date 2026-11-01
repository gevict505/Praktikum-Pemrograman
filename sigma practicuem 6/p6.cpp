#include <iostream>
using namespace std;

void demo() {
    int otomatis = 0;
    static int tetap = 0;
    ++otomatis;
    ++tetap;
    cout << "otomatis =" << otomatis;
    cout << ",static =" << tetap << endl;

}

int main(){
    for (int i = 0; i < 3; i++) demo();
    return 0;
}
