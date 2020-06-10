#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

    int n, sum;
    cin >> n;
    
    int *a = new int[8];
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    a[3] = 1;
    
    for (int i = 1; i <= n; i++){
        a[4] = a[0];
        a[5] = a[1];
        a[6] = a[2];
        a[7] = a[3];
        a[0] = 2*a[4] + a[5];
        a[1] = a[6];
        a[2] = a[7];
        a[3] = a[5] + a[6] + a[7];
    }
   
    sum = a[3];
    cout << sum << endl;
    
    delete [] a;
    return 0;
}

/*1 ААА+ a1
2 АА a2
3 А a3
4 В a4


1 -> 2 по 1
2 -> 1 or 4
3 -> 2 or 4
4 -> 3 or 4
*/
