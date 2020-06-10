#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main() {
    // insert code here...
    int x = 1, m = 0;
    while (x!=0){
        cin >> x;
        if (x % 2 == 0)
            if (x>m)
                m = x;
    }
    cout << m << endl;
    return 0;
}
