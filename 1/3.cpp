#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main() {
    // insert code here...
    int a,k;
    k = -1;
    do{
    cin >> a;
    if (a % 2 == 0){
        k = k +1;
        }
    }
    while (a!=0);
    cout << k << endl;

    return 0;
}
