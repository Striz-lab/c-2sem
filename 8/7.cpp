#include <iostream>
#include <cmath>
#include <string>
#include <vector>

//void find_root(f, a, b, tol);

using std::cout;
using std::cin;
using std::endl;

int main() {
    // insert code here...
    int x, f = 1;
    cin >> x;
    for (int i = 2; i<=sqrt(x); i++)
        if (x%i==0)
            f=0;
    cout << "YES" << endl;
    return 0;
}
