#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main() {
    // insert code here...
    int a,b;
    cin >> a >> b;
    while ((a != 0) and (b != 0)) {
        if (a>b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    cout << a+b << endl;
    
    return 0;
}

