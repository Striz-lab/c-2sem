#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main(){
    
    bool a = true, b = 0;
    
    // !false == true
    // !true == false
    
    bool c = a&&b, d = a||b;
    cout << c << " " << d << endl;
    
    int x;
    do{
        cin >> x;
        if (x % 2 == 0)
            cout << x << endl;
    }
    while (x != 0);
    
    return 0;
}
