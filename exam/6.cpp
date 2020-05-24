#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;


int main(){
    
    int x;
    bool f = false;
    
    cin >> x;
    
    for (int i = 2; i <= sqrt(x); i++)
        if (x%i == 0)
            f = true;
    
    cout << f << endl;
    
    return 0;
}

