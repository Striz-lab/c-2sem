#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    double num;

    cin >> num;

    if (num < 10) {
        cout << "Это число меньше 10." << endl;
    } else {
        cout << "Это число больше либо равно 10." << endl;
    }
    
    int x, max1 = -2147483648, max2 = -2147483648, max3 = -2147483648;
    do{
        cin >> x;
        if (x > max1){
            
            max3 = max2;
            max2 = max1;
            max1 = x;
            
        }
        else{
            if (x > max2){
                
                max3 = max2;
                max2 = x;
                
            }
            else{
                if (x > max3){
                    
                    max3 = x;
                    
                }
            }
        }
    }
    while (x != 0);
    
    cout << max1 << " " << max2 << " " << max3 << endl;
    
    return 0;
}
