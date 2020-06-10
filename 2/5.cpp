#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, i, dist, n_max, l_s, l_m;
    i=0;
    n=0;
    dist=1;
    l_s=1;
    cin>>n_max>>l_m;
    int *zagon = new int[n_max];
    n_max --;
    while (n<=n_max){
        cin>>zagon[n];
        n++;
    }
    dist = (zagon[n_max]-zagon[0])/(l_m-1)+1;
    while (l_s<l_m){
        dist --;
        l_s = 1;
        n = 0;
        i = 0;
        while (n<n_max){
            while (zagon[i]-zagon[n] < dist) i++;
            n =i;
            l_s ++;
        }
        if (dist<1) break;
    }
    cout << dist << endl;
    return 0;
}
