#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main() {
    // insert code here...
    int n, i = 0, *v = new int[10];
    string vavilon;
    cin >> n;
    while (n>59){
        v[i] = n % 60;
        n = n/60;
        i ++;
    }
    v[i] = n;
    while (i>=0){
        for (int k = 0; k < v[i]/10; k++)
            cout << "<";
        for (int k = 0; k < v[i]%10; k++)
            cout << "v";
        if (i>0)
            cout << ".";
    }
    cout << endl;
    return 0;
}
