#include<iostream>
#include<string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void Zfunction(vector<int> &vect, string s){
    int n = s.size();
    for (int i = 1, j = 0, k = 0; i < n; i++){
        if (i <= k){
            if (k - i + 1 > vect[i - j])
                vect[i] = vect[i - j];
            else
                vect[i] = k - i + 1;
        }
        while ((i + vect[i] < n) && (s[vect[i]] == s[i + vect[i]]))
            vect[i]++;
        if (i + vect[i] - 1 > k){
            k = vect[i] - 1 + i;
            j = i;
        }
    }
}

int main(){
    string s;
    getline(cin, s);
    vector<int> vect(s.length(), 0);

    Zfunction(vect, s);

    for (auto i : vect)
        cout << i << " ";
    cout << endl;
    return 0;
}
