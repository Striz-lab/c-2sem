#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main() {
    // insert code here...
    int x, f = 1;
    cin >> x;
    for (int i = 2; i<=sqrt(x); i++)
        if (x%i==0)
            f=0;
    cout << f << endl;
    return 0;
}
