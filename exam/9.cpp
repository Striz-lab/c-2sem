#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;


int main(){
    
    int n,m,k,l;
    
    cin >> n >> m >> k >> l;
    
    int A[n][m];
    int B[k][l];
    int At[m][n];
    int AB[n][l];
    
    if (m != k)
        cout << "AB is impossible!" << endl;
    
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j++){
            cin >> A[i][j];
        }
    }
    
    
    for (int i = 0; i < k; i ++){
        for (int j = 0; j < l; j++){
            cin >> B[i][j];
        }
    }
    
    
    cout << "AB:" << endl;
    
    if (m == k){
        for (int i = 0; i < k; i ++){
            for (int j = 0; j < l; j++){
                AB[i][j] = 0;
            }
        }
        for (int i = 0; i < n; i ++){
            for (int j = 0; j < m; j++){
                for (int o = 0; o < m; o++){
                    AB[i][j] += A[i][o]*B[o][j];
                }
            }
        }
        for (int i = 0; i < k; i ++){
            for (int j = 0; j < l; j++){
                cout << AB[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    cout << "At:" << endl;
    
    for (int i = 0; i < k; i ++){
        for (int j = 0; j < l; j++){
            At[i][j] = A[j][i];
        }
    }
        
    for (int i = 0; i < k; i ++){
        for (int j = 0; j < l; j++){
            cout << At[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
