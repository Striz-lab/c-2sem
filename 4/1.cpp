#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int n, l, x;
    cin>>n>>l;
    l = l%n;
    int *p = new int[n];
    int *d = new int[n];
    for (int i = 1; i <= n; i++){
        cin >> x;
        d[i] = x;
    }
    for (int i = 1; i <= n; i++){
        if (i>l){
            p[i-l] = d[i];
        }
        else{
            p[n-l+i] = d[i];
        }
    }
    for (int i = 1; i <= n; i++){
        cout << p[i] << " ";
    }
    
    return 0;
}
