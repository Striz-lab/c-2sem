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
    for (int i = 1; i <= n; i++){
            p[i] = d[n-i+1];
            cout << p[i] << " ";
        }

    return 0;
}
