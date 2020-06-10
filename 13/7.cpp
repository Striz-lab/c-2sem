#include <string>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


vector<int> prefix(string s) {
    int n = (int)s.length();
    vector<int> p(n);
    for (int i = 1; i < n; i++) {
        int j = p[i-1];
        while (j > 0 && s[i] != s[j])
            j = p[j-1];
        if (s[i] == s[j])
            j++;
        p[i] = j;
    }
    return p;
}

int main()
{
    string line;
    getline(cin, line);
    vector<int> p = prefix(line);
    for (int i = 0; i < p.size(); i++){
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}

