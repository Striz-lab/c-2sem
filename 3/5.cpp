#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int n, x, k = 0;
    cin>>n;
    int *p = new int[n];
    for (int i = 1; i<=n; i++){
        cin >> x;
        p[i] = x;
    }
    for (int i = 1; i<=n; i++){
        for (int j = i+1; j<=n; j++){
            if (p[i] == p[j]){
                k++;
            }
        }
    }
    if (k>1){
        k = 0;
    }
    else{
        k = 1;
    }
    cout << k <<endl;
    return 0;
}
