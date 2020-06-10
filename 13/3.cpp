#include <iostream>
#include <cstdio>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

struct Door{
    bool available;
    int numeration;
};

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector <Door> > v(n);
    for (auto & i : v)
        for (int j = 0; j < m; ++j){
            Door tmp;
            tmp.numeration = 0;
            i.push_back(tmp);
        }
    v[0][0].available = true;
    v[0][0].numeration = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j].available;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (!v[i][j].available)
                v[i][j].numeration = 0;
            else{
                if (i != 0)
                    if (j != 0)
                        v[i][j].numeration += v[i - 1][j].numeration + v[i][j - 1].numeration;
                if (j == 0)
                    if (i != 0)
                        v[i][j].numeration += v[i - 1][j].numeration;
                if (i == 0)
                    if (j != 0)
                        v[i][j].numeration += v[i][j - 1].numeration;
            }
        }
    if (v[n - 1][m - 1].numeration == 0)
        cout << "Impossible" << endl;
    else
        cout << v[n - 1][m - 1].numeration;
    return 0;
}
