#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main(){

    int n;
    cin >> n;
    int *a = new int[n];
    int *k = new int[n + 1];
    k[0] = 0;
    k[1] = 1;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 2; i < n + 1; i++)
        k[i] = 0;
    
    for (int i = 1; i <= n; i++){
        k[i] += k[i - 1];
        k[i] %= 937;
        if ((i + a[i - 1] <= n) and (a[i - 1] != 1))
            k[i + a[i - 1]] += k[i] % 937;
        k[i] %= 937;
    }
    cout << k[n] % 937 << endl;
    
    delete[]a;
    delete[]k;
    return 0;
}
