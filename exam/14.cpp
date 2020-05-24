#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;



template<typename T>
void insertion_sort(T array[], std::size_t size){
    for (std::size_t sorted_size = 1; sorted_size < size; sorted_size++)
    {
        if (array[sorted_size] < array[sorted_size - 1])
        {
            T tmp = std::move(array[sorted_size]);

            std::size_t idx = sorted_size;
            for (; idx != 0 && tmp < array[idx - 1]; idx--)
            {
                array[idx] = std::move(array[idx - 1]);
            }
            array[idx] = tmp;
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
