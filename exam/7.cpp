#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main(){
    
    int n, d = 2;
    
    cin >> n;
    
    while (n>1){
        while(n%d == 0){
            n = n/d;
            cout << d << endl;
        }
        d++;
    }
    
    
    return 0;
}
