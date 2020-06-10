#include <iostream>
#include <string>
using namespace std;

int main(){
    int number, max = 0, min = 1000000, mmax = 0, mmin = 1000000;
    cin >> number;
    while (number > 0){
        int x;
        cin >> x;
        if (max < x) {mmax = max; max = x;}
        else if (mmax < x) mmax = x;
        if (min > x) {mmin = min; min = x;}
        else if (mmin > x) mmin = x;
        number --;
    }
    cout << min+mmin << " " << max+mmax<< endl;
    return 0;
}
