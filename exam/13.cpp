
#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;


int main(){
    
    int value = 999;
    int *ptr = &value;

    cout << sizeof(ptr) << endl;
    
    int **a = new int*[3];
    
    for (int count = 0; count < 3; count++)
        a[count] = new int[3];
    
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            a[i][j] = 9;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    
    for (int i = 0; i < 3; i++)
        delete [] a[i];
        
    delete [] a;
    return 0;
}
