#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;



void insertion_sort(int *array, int n){
    for (int ssize = 0; ssize < n; ssize++){
        int min = array[ssize], mplace = ssize;
        for (int i = ssize; i < n; i++){
            if (array[i] < min){
                min = array[i];
                mplace = i;
            }
            std::swap(array[ssize], array[mplace]);
        }    
    }
}

int size = 9;


int main(){
    
    int *array = new int[size];
    for (int i = 0; i < size; i++)
        array[i] = 1;
    
    
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    
    cout << endl;
    
    delete [] array;
    
    int arr[] = { 7, 8, 2, 4, 5 };
    
    cout << &arr[1] << endl;
    cout << arr + 1 << endl;
    
    
    cout << arr[1] << endl;
    cout << *(arr + 1) << endl;
    
    int n;
    cin >> n;
    
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    insertion_sort(a, n);
    
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    
    cout << endl;
    
    return 0;
}
