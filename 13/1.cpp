#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int w, n;
    cin >> n >> w;
    int64_t *price = new int64_t[n];
    int64_t *weight = new int64_t[n];
    
    int64_t arr[n + 1][w + 1];
    for (int i = 0; i < n; i++)
        cin >> weight[i] >> price[i];

    for (int j = 0; j < w + 1; j++)
        arr[0][j] = 0;

    for (int i = 1; i < n + 1; i++){
        for (int j = 0; j < w + 1; j++){
            if (j >= weight[i - 1]){
                if (price[i - 1] + arr[i - 1][j - weight[i - 1]] > arr[i - 1][j])
                    arr[i][j] = price[i - 1] + arr[i - 1][j - weight[i - 1]];
                else
                    arr[i][j] = arr[i - 1][j];
            }
            else
                arr[i][j] = arr[i - 1][j];
        }
    }

    cout << arr[n][w] << endl;
    
    delete [] price;
    delete [] weight;
    

    return 0;
}
