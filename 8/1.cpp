#include <iostream>


using std::cin;
using std::cout;
using std::endl;

int main() {
    // insert code here...
    int a,b,c,d,x;
    double x1,x2;
    int k = 2;
    cin >> a >> b >> c >> d >> x;
    
    x1 = b - a;
    x2 = d/c;
    
    if ((x == x1) or (x == x2)){
        k = k + 2;
        if (x1 == x2){
            k = k + 1;
        }
    }
    else if (x == 1024){
        k = k + 1;
    }
    
    cout << k << endl;
    
    return 0;
}

