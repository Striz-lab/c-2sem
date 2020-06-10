#include <iostream>
#include <vector>
#include <algorithm>
 
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::min;
 
int main(){
    
    vector <int> v;
    int *a = new int [102];
    int n = 0, x;
 
    while ((cin.peek() != '\n')){
        cin >> x;
        n++;
        v.push_back(x);
    }
 
    sort(v.begin(), v.end());
 
    a[2] = v[1] - v[0];
    if (n>2)
        a[3] = v[2] - v[0];
 
    for (int i = 4; i <= n; i ++)
        a[i] = min(a[i-2] + v[i-1] - v[i-2], a[i-1] + v[i-1] - v[i-2]);
 
    cout << a[n] << endl;
 
    delete [] a;
    return 0;
}
