#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


int min(int a, int b){
    if (a > b)
        return b;
    else
        return a;
}

int levenstein_distance(string first, string second, int I_cost, int D_cost, int R_cost){
    int m = first.length();
    int n = second.length();
    vector< vector<int> > D;
    D.resize(m + 1);
    for (int i = 0; i <= m; i++)
        D[i].resize(n + 1);
    D[0][0] = 0;
    for (int i = 1; i <= m; i++)
        D[i][0] = D[i - 1][0] + D_cost;
    for (int j = 1; j <= n; j++)
        D[0][j] = D[0][j - 1] + I_cost;

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (first[i - 1] != second[j - 1])
                D[i][j] = min(min(D[i - 1][j] + D_cost, D[i][j - 1] + I_cost), D[i - 1][j - 1] + R_cost);
            else
                D[i][j] = D[i - 1][j - 1];
        }
    }
  return D[m][n];
}

int main(){
    
    int I_cost, D_cost, R_cost;
    string a, b;
    cin >> I_cost >> D_cost >> R_cost >> a >> b;

    cout << levenstein_distance(a, b, I_cost, D_cost, R_cost ) << endl;
    return 0;
}
