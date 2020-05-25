#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void countingSort(int* array, int n, int m) {
    int *c = new int[m];
    for (int i = 0; i < m; i++)
        c[i] = 0;
    
    for (int i = 0; i < n; i++) {
        c[array[i]] = c[array[i]] + 1;
    }
        
    int b = 0;
    int place = -1;
    while (b != n){
        place++;
        while (c[place] == 0){
            place++;
            for (int i = 0; i < c[place]; i++){
                array[b] = place;
                b++;
            }
        }
    }
}

int main(){
    
    /*
     int8_t    1 байт signed    от -128 до 127
     uint8_t    1 байт unsigned    от 0 до 255
     int16_t    2 байта signed    от -32 768 до 32 767
     uint16_t    2 байта unsigned    от 0 до 65 535
     int32_t    4 байта signed    от -2 147 483 648 до 2 147 483 647
     uint32_t    4 байта unsigned    от 0 до 4 294 967 295
     int64_t    8 байт signed    от -9 223 372 036 854 775 808 до 9 223 372 036 854 775 807
     uint64_t    8 байт unsigned    от 0 до 18 446 744 073 709 551 615
     */
    
    int n, m = 0;
    bool flag = 1;
    
    cin >> n;
    
    int *a = new int[n];
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] > m){
            m = a[i];
        }
    }
    
    
    for (int i = 1; i < n; i++)
        if (a[i] <= a[i-1])
            flag = false;
    
    
    if (flag == false){
        cout << "not good" << endl;
        countingSort(a, n, m);
    }
    else
        cout << "not bad" << endl;
    
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    
    cout << endl;
    
    delete []a;
    
    return 0;
}
