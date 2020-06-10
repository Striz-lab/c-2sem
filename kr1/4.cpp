#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int n = 0, k = 0, s = 0, r = 0;
    
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    
    for (int i = 0; i < n; i ++){
        for (int j = i + 1; j < n; j ++){
            s = 0;
            r = (a[i] + a[j]);
            for (int l = 2; l<r; l++){
                if (r % l == 0)
                    s = 1;
            }
            if ((s == 0) and (r > k))
                k = r;
        }
    }
    
    
    cout << k << endl;
    
    return 0;
}




