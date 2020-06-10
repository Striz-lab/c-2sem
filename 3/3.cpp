#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int n,i,j;
    cin >> n;
    int *p = new int[n];
    for (i = 2; i <= n; i++){
        p[i] = 0;
       
    }
    for (i = 2; i*i < n; i++){
        if (p[i] == 0){
            for (j = i*i; j <= n; j = j+i){
                p[j] = 1;
            }
        }
    }
    for (i = 2; i <= n; i++){
        if (p[i] == 0){
            cout << i << " ";
        }
    }
    return 0;
}
