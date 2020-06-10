#include <iostream>
 
using namespace std;
 
const int N = 1000;
 
int a[N];
int dp[N];
int n;
 
int main(){
 
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i], dp[i] = 1;
 
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
            if(a[j] > a[i])
                dp[j] = max(dp[j], dp[i] + 1);
    }
 
    int ans = 0;
    for(int i = 0; i < n; i++)
        ans = max(ans, dp[i]);
 
    cout << ans << endl;
 
    return 0;
}
