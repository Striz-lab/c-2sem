#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

    int a = 8;
    int b = ++a;
    int c = 8;
    int d = c++; // += *= -=
    
    
    
    int x, max, koordinate = 0;
    
    cin >> x;
    max = x;
    
    while (x != 0){
        cin >> x;
        if (x > max){
            max = x;
            koordinate ++;
        }
    }
    
    cout << koordinate << endl;
    
    return 0;
}
