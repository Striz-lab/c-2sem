#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int a;
    float b;
    double c;
    bool d;
    
    int x, k = 0, sum = 0, mult = 1, max = -2147483648;
    do{
        cin >> x;
        if (x % 2 == 0)
            k = k + 1;
        sum += x;
        if (x != 0)
            mult *= x;
        if (x > max)
            max = x;
        
    }
    while (x != 0);
    
    cout << k << " " << sum << " " << mult << " " << max << endl;
    
    return 0;
}
