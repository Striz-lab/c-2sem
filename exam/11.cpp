#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;

bool isSorted(int a[], int n){
    for (int i = 1; i < n; i++)
        if (a[i] < a[i - 1])
            return false;
    return true;
}

void shuffle(int a[], int n){
    for (int i = 0; i < n; i++)
        std::swap(a[i], a[rand() % n]);
}
  
void bogosort(int a[], int n){
    while (!isSorted(a, n))
        shuffle(a, n);
}

void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                std::swap(arr[j], arr[j+1]);
}
 
int main()
{
    std::string name("Sasha");
    std::cout << "My name is " << name;
    
    int n;
    cin >> n;
    int *a = new int[n];
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    bogosort(a, n);
    
    for (int i = 0; i < n; i++)
           cout << a[i] << " ";
       
    cout << endl;
       
    delete []a;
    
    int *b = new int[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    
    bubbleSort(b, n);
    
    for (int i = 0; i < n; i++)
           cout << b[i] << " ";
       
       cout << endl;
       
       delete []b;
    
    return 0;
}
