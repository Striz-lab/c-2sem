#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    int n = 0, odd = 0, even = 0;
    vector<int> a(10000);
    
    while (cin >> a[n])
        n++;

    vector<int> b(1000000);
    vector<int> c(1000000);

    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            b[even] = a[i];
            even ++;
        }
        else{
            c[odd] = a[i];
            odd ++;
        }
    }
        
    for (int i = 1; i < odd; i++)
        for (int j = 0; j < odd - i; j++)
            if (c[j + 1] < c[j]){
                c[j] = c[j] + c[j + 1];
                c[j + 1] = c[j] - c[j + 1];
                c[j] = c[j] - c[j + 1];
            }
    for (int i = 1; i < even; i++)
        for (int j = 0; j < even - i ; j++)
            if (b[j + 1] < b[j]){
                b[j] = b[j] + b[j + 1];
                b[j + 1] = b[j] - b[j + 1];
                b[j] = b[j] - b[j + 1];
            }
    
    for (int k = 0; k < even; k++)
        cout << b[k] << " ";
    for (int k = 0; k < odd; k++)
        cout << c[k] << " ";
    cout << endl;
    return 0;
}
