#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main() {
    // insert code here...
    int n,x,k = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        if ((x % 4 == 0) and (x / 1000 != 4) and (x / 1000 != 5)) {
            cout << x << endl;
        }
        else if ((x % 7 == 0) and (x / 1000 != 1) and (x / 1000 != 7)) {
            cout << x << endl;
        }
        else if ((x % 9 == 0) and (x / 1000 != 9) and (x / 1000 != 8)) {
            cout << x << endl;
        }
        else
            k++;
    }
    if (k == n)
        cout << 0 << endl;
    return 0;
}
