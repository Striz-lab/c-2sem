#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

bool is_coprime(uint32_t a, uint32_t b){
    while (b != 0){
        uint32_t tmp = b;
        b = a % b;
        a = tmp;
    }

    if (a == 1)
        return true;
    return false;
}

int f(vector<int> v)
{
    vector<int> vec(0);
    for (int i = 0; i < v.size() - 1 and v.size() != 0; i++)
        if (is_coprime(v[i], v[v.size()-1]) == 1)
            vec.push_back(v[i]);
    if (v.size())
        v.pop_back();
    else
        return 0;
    return 1 + f(vec) + f(v);
}

int main(){
    int N, x;
    cin >> N;
    vector<int> A;
    for (int i = 0; i < N; i++)
        cin >> x, A.push_back(x);
    cout << f(A) + 1 << endl;
    
    return 0;
}
