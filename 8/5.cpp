#include <iostream>
#include <cmath>
#include <string>
#include <vector>


using std::cin;
using std::cout;
using std::endl;

int main() {
    // insert code here...
    int n;
    cin >> n;
    int b[n][n];
    int c[n][n];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            c[i][j] = b[n-j-1][i];
        }
    }

    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}
