#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int temp;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
