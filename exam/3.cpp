#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

    int a = 8;
    int b = ++a;
    int c = 8;
    int d = c++; // += *= -=
    
    
    
    int x, max = -2147483648, koordinate = 0;
    do{
        cin >> x;
        if (x > max){
            max = x;
            koordinate ++;
        }
    }
    while (x != 0);
    
    cout << koordinate - 1 << endl;
    
    return 0;
}
