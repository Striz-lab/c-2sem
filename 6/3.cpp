#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main(){
    float f = 0.0;
    cin >> f;
    unsigned u = *(unsigned*)&f;
    unsigned tst = 1 << 31;
    while (tst) {
        cout << ((u & tst) ? "1" : "0");
        tst >>= 1;
    }
    cout << endl;
    return 0;
}
