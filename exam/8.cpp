#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main(){
    
    int n;
    cin >> n;
    
    bool *p = new bool[n];
    
    for (int i = 2; i*i < n; i++)
        if (p[i] == 0)
            for (int j = i*i; j <= n; j = j+i)
                p[j] = 1;
    
    
    for (int i = 0; i < n; i++)
        if (!p[i])
            cout << i << " ";
    
    cout << endl;
    
    delete [] p;
    
    return 0;
}
