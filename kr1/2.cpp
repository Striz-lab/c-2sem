#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main() {
    // insert code here...
    int n, k = 0;
    float l = 0;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    int *c = new int[n];
    float *d = new float[n];
    
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    
    for (int i = 0; i < n; i++){
        if ((a[i] >= 60) or (b[i] - 100 - c[i] > 10) or (c[i] + 100 - b[i] > 10)){
            k++;
            l = l+d[i];
        }
    }
    if (l == 0)
        cout << "0" << endl;
    else
        cout << l/k << endl;
    return 0;
}
