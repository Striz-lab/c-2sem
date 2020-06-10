#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int n, x;
    cin>>n;
    int *p = new int[n];
    int *d = new int[n];
    for (int i = 1; i <= n; i++){
        cin >> x;
        d[i] = x;
    }
    p[1] = (d[n]+d[1]+d[2])/3;
    p[n] = (d[1]+d[n]+d[n-1])/3;
    
    for (int i = 1; i <= n; i++){
        if ((i != 1) and (i != n)){
            p[i] = (d[i-1]+d[i]+d[i+1])/3;
        }
        cout << p[i] << " ";
        }
   
    return 0;
}
