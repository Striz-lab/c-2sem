#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int size = 9;


int **f(int **a){
    
    for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
        a[i][j] = 10;
    
    return a;
}

int *F(int *Array, int size){
    for(int i = 0; i < size; i++) {
       Array[i] = 10;
    }
    return Array;
}

int* Func(int* Array, int size)
{
    int *new_array = new int[size];
    for(int i = 0; i < size; i++) {
       new_array[i] = 10;
    }
    return new_array;
}

int main(){
    
    int *array = new int[size];
    for (int i = 0; i < size; i++)
        array[i] = 1;
    
    for (int i = 0; i < size; i++)
        cout << F(array, size)[i] << " ";
    
    cout << endl;
    
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    
    cout << endl;
    
    delete [] array;
    
    
    
    int **a = new int*[3];
    
    for (int count = 0; count < 3; count++)
        a[count] = new int[count+1];
    
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            a[i][j] = 9;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
        
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            cout << f(a)[i][j] << " ";
        cout << endl;
    }
    
    for (int i = 0; i < 3; i++)
        delete [] a[i];
        
    delete [] a;
    return 0;
}
