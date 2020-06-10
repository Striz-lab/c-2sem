#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <math.h>
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::getline;
using std::stringstream;

int max(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

vector<int> split(string line){
    vector<int> words(0);
    stringstream s(line);
    int word;
    int i = 0;
    while (s >> word){
        words.push_back(word);
        i++;
    }
    words.insert(words.begin(), i);
    return words;

}

void step(vector<int> num, vector<int> init, int *n){
    int a = 0;
    int i;
    for (i = 0; i < *n; i++){
        a = max(a, num[i]);
    }
    if (a != 0){
        vector<int> ones;
        vector<int> zeros;
        int nz = 0, no = 0;
        vector<int> temp_init = init;
        vector<int> temp_num = num;
        for (i = 0; i < *n; i++){
            if (num[i] % 10 == 0){
                zeros.push_back(i);
                nz++;
            } else {
                ones.push_back(i);
                no++;
            }
        }
        for (i = 0; i < nz; i++){
            temp_num[i] = num[zeros[i]];
            temp_init[i] = init[zeros[i]];
        }
        for (; i < *n; i++){
            temp_num[i] = num[ones[i - nz]];
            temp_init[i] = init[ones[i - nz]];
        }
        init = temp_init;
        num = temp_num;
        for (i = 0; i < *n; i++){
            cout << init[i] << " ";
            num[i] = num[i] / 10;
        }
        cout << endl;
        step(num, init, n);
        return;
    }
return;
}

int main(){
    string line;
    std::getline(cin, line);
    vector<int> init = split(line);
    vector<int> a(init[0]);
    vector<int> b(init[0]);
    for (int i = 0; i < init[0]; i++){
        a[i] = init[i + 1];
        b[i] = init[i + 1];
    }
    int n = init[0];
    step(a, b, &n);



return 0;
}
