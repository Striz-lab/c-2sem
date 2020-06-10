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


using namespace std;

double round3(double f, int *num)
{
    int64_t i, n = 1;

    i = round(f*1000);
    if (i % 100)
        n++;
    if (i % 10)
        n++;
    f = i / 1000.0;

    if (num)
        *num = n;
    return f;
}


int main() {
    int x, j = 0, n = 0, s = 0;
    int64_t ds = 0;
    double m,d;
    cin >> x;
    s += x;
    ds += x*x;
    while (x){
        cin >> x;
        j = 1 + j;
        ds = ds + x*x;
        s = s + x;
    }
    m = ((double)s)/j;
    d = ((double)ds)/j-m*m;
    
    m = round3(m,&n);
    cout << fixed << setprecision(n) << m << " ";
    d = round3(d,&n);
    cout << fixed << setprecision(n) << d << endl;

    return 0;
}
