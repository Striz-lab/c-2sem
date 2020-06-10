#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int n,temp;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int u = 0; u < n; u++){
        for (int i = 1; i < n; i++){
            int j = i - 1;
            while (((arr[i] != 0 and arr[i] * arr[j] <= 0) or (arr[i] == 0 and arr[j] <= 0)) and j >= 0 ){
                    j--;
            }
            if (j >= 0 and ((( abs(arr[j]) > abs(arr[i])) and (arr[i] != 0)) or ((arr[i] == 0) and (arr[j] > 0)) )){
                    temp = arr[i]
                    arr[i] = arr[j];
                    arr[j] = temp;
                    for (int k = 0; k < n; k++){
                        cout << arr[k] << " ";
                    }
                    cout << endl;
            }
        }
    }
    return 0;
}
