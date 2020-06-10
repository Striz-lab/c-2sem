#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int n, number, k = 0, s = 0, i;
    cin>>n;
    int *p = new int[n];
    for (i = 1; i <= n; i++){
        cin >> number;
        p[i] = number;
        s = s + number;
    }
    for (i = 1; i <= n; i++){
        if (p[i]>s/n){
            k = k+p[i];
        }
    }
    cout << k << endl;
    return 0;
}
