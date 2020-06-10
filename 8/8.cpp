#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;


int main() {
    // insert code here...
    int n,k = 1000000;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++)
            if ((a[j] + a[i] == 0) and (i - j < k) and (a[j] < 0))
                k = i - j;
    }
    if (k == 1000000)
        k = 0;
    cout << k << endl;
    return 0;
}

