#include <iostream>
#include <cmath>
#include <string>
#include <vector>


using std::cin;
using std::cout;
using std::endl;

int main() {
    // insert code here...
    int n = 1500000, x = 1, i = 0;
    int *a = new int[n];
    int *b = new int[n];
    
    int *c = new int[n];
    int *d = new int[n];
    int *e = new int[n];
    
    double *g = new double[n];
    
    while (x != 3){
        cin >> a[i] >> b[i];
        i++;
        x = b[i - 1];
    }
    
     for (int j = 0; j < i; j++){
        for (int k = 0; k < i; k++){
            if (a[j] == a[k]){
                if (b[j] == 2)
                    e[j]++;
                if (b[j] == 0)
                    d[j]++;
                //g[j] = 100*d[j]/e[j];
            }
        }
    }
    
    for (int j = 0; j < i; j++){
        cout << e[j] << " " << d[j] << endl;
    }
    
    return 0;
}
