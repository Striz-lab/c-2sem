#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main() {
    // insert code here...
    int x = 1, m = 0, i = 1;
    while (x!=0){
        cin >> x;
        if (x == m)
            i++;
        if (x>m){
            i = 1;
            m = x;
        }
                
    }
    cout << i << endl;
    return 0;
}
