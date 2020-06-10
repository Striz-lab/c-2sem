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

double Levenstein(string a, string b){
    vector< vector<int> > v;
    v.resize(a.length() + 1);

    for (int i = 0; i <= a.length(); ++i)
        v[i].resize(b.length() + 1);

    for (int i = 0; i <= a.length(); ++i)
        v[i][0] = i;

    for (int i = 0; i <= b.length(); ++i)
        v[0][i] = i;

    for (int i = 1; i <= a.length(); ++i)
        for (int j = 1; j <= b.length(); ++j)
            if (b[j - 1] == a[i - 1])
                v[i][j] = v[i - 1][j - 1];
            else
                v[i][j] = min(min(v[i - 1][j], v[i][j - 1]), v[i - 1][j - 1]) + 1;

    return v[a.length()][b.length()];
}

int main(){
    string a, b;
    cin >> a >> b;
    cout << Levenstein(a, b);
    return 0;
}
