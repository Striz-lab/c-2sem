#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    // insert code here...
    int n, i, m;
    cin >> n >> i;
    int *b = new int[n];
    string *a = new string[n];
    int *c = new int[n];
    
    for (int j = 0; j < n; j++){
        cin >> a[j] >> b[j];
        c[j] = 1;
    }
    cin >> m;

    for (int k = 0; k < m / n + 1; k++){
        for (int j = 0; j < m % n; j++){
            if (c[j] == 1){ //if lives
                if (i == 0){
                    if (b[j] == 0){
                        i = 1;
                        b[j] = 1;
                    }
                    else
                        c[j] = 0;
                }
                else{
                    if (b[j] == 0)
                        i = 0;
                }
            }
        }
    }
    
    
    for (int j = 0; j < n; j++){
        if (c[j] != 0){
            cout << a[j] << " " << b[j] << endl;
        }
    }
    
    return 0;
}
