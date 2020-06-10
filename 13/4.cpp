#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int min(int &a, int &b){
    if (a > b)
        return b;
    else
        return a;
}

bool what_cost(int *price, int *map, int *status, int m, int n){
    bool fin = false;
    for (int i = 0; i < m - 1; i++){
        for (int j = 0; j < n - 1; j++){
            if (status[n * i + j + 1] == 1 and  status[n * (i + 1) + j] == 1 and status[n * i + j] == 0){
                status[n * i + j] = 1;
                map[n * i + j] = min(map[n * (i + 1) + j], map[n * i + j + 1]) + price[n * i + j];
                fin = true;
            }
        }
    }
    for (int i = 0; i < m - 1; i++){
        if (status[n * i + n - 1] == 0 and status[n * (i + 1) + n - 1] == 1){
            status[n * i + n - 1] = 1;
            map[n * i + n - 1] = map[n * (i + 1) + n - 1] + price[n * i + n - 1];
            fin = true;
        }
    }
    for (int j = 0; j < n - 1; j++){
        if (status[n * (m - 1) + j] == 0 and status[n * (m - 1) + j + 1] == 1 ){
            status[n * (m - 1) + j] = 1;
            map[n * (m - 1) + j] = map[n * (m - 1) + j + 1] + price[n * (m - 1) + j];
            fin = true;
        }
    }
    return fin;
}

int main(){
    int n, m, l;
    cin >> m >> n;
    l = m * n;
    int *price = new int[l];
    int *status  = new int[l];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> price[n * i + j];
            status[n * i + j] = 0;
        }
    }
    int mon;
    cin >> mon;
    int *map = new int[l];
    map[l - 1] = price[l - 1];
    status[l - 1] = 1;
    bool work = true;
    while (work){
        work = what_cost(price, map, status, m, n);
    }
    mon = mon - map[0];
    if (mon >= 0){
        cout << mon << endl;
    } else {
        cout << "Impossible" << endl;
    }
    
    delete [] price;
    delete [] status;
    delete [] map;
    
return 0;
}
