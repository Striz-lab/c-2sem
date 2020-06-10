#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main() {
    // insert code here...
    int a;
    cin >> a;
    if ((a % 4 == 0) and (a % 100 != 0) or (a % 400 == 0)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
