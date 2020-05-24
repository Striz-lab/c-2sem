#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

template<typename T>
void selection_sort(T array[], const size_t size){
    for (size_t idx_i = 0; idx_i < size - 1; idx_i++){
        size_t min_idx = idx_i;
        for (size_t idx_j = idx_i + 1; idx_j < size; idx_j++){
            if (array[idx_j] < array[min_idx])
                 min_idx = idx_j;
            
        }
        if (min_idx != idx_i)
            std::swap(array[idx_i], array[min_idx]);
        
    }
}


int Size = 9;


int main(){
    
    int *array = new int[Size];
    for (int i = 0; i < Size; i++)
        array[i] = 1;
    
    
    for (int i = 0; i < Size; i++)
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
    
    selection_sort(a, n);
    
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    
    cout << endl;
    
    return 0;
}
