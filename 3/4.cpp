#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int n,x, min = 10000000, max = 0, s=0, r=0;
    cin>>n;
    for (int i = 1; i<=n; i++){
        cin >> x;
        s = s + x;
        if (x>max){
            max = x;
        }
        if (x<min){
            min = x;
        }
    }
    cout << max - min - n + 1<<endl;
    return 0;
}
