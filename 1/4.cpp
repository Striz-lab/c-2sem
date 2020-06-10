#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main() {
    // insert code here...
    int n,i;
    cin >> n;
    i = 1;
    while (i<n)
        i = i * 2;
    if (i==n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
