#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

void F(int n, int &k){
    //std::cout << n;
    k = k + n;
    if (n >= 3){
        F(n / 2,k);
        F(n - 1,k);
    }
}

int main() {
    int n, k = 0;
    cin >> n;
    
    F(n,k);
        
    
    
    cout << k << endl;
    
    return 0;
}
