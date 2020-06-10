#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int n,x=1;
    cin>>n;
    while (n>0){
        x++;
        int dmax = int(sqrt(x)), d=2;
        while (d<= dmax){
            if (x%d == 0)
                d=x;
            d++;
        }
        if (d == dmax+1) n--;
    }
    cout << x << endl;
    return 0;
}
