#include <iostream>

using std::cin;
using std::cout;
using std::endl;
 
 int main()
 {
     int n, j, i, sum = 0;
     cin >> n;
     
     int *a = new int[20];
     int *b = new int[20];
     int *c = new int[20];
     a[0] = 1;
     b[0] = 1;
     c[0] = 1;
      
     for(int i = 1; i < n; i++){
         a[i] = b[i-1] + c[i-1];
         c[i] = a[i-1] + b[i-1] + c[i-1];
         b[i] = a[i-1] + b[i-1] + c[i-1];
     }
     
     sum = a[n -1] + b[n -1] + c[n - 1];
     
     cout << sum << endl;
     
     delete [] a;
     delete [] b;
     delete [] c;
     return 0;
 }
