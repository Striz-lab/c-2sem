#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main() {
    // insert code here...
    int n,d =2;
    cin >> n;
    while (n>1){
        while(n%d == 0){
            n = n/d;
            cout<<d<<endl;
        }
        d++;
    }
    return 0;
}

