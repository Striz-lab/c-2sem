#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int detective(int M, int *nums){
    int a = 0, b = 1;
    for (int l = M - 1; l >= 0 ; l--){
        a = a + nums[l]*b;
        b *= 10;
    }
   
    for (int i = 3; i*i < a + 1 ; i += 2)
        if (a%i == 0)
            return 0;
    
    if (a%2 == 0)
        return 0;
    
    return 1;
}

int generation(int cur, int M, int N, int *nums, bool *B, int &sum){
    
    if (cur == M)
        sum = sum + detective(M, nums);
    else{
        for (int i = 0; i < N; i++){
            if (B[i])
                continue;
            nums[cur] = i + 1;
            B[i] = true;
            generation(cur + 1, M, N, nums, B, sum);
            B[i] = false;
        }
    }
    return sum;
}

int main(){
    
    int N, M, sum = 0, cur = 0, k = 0;

    cin >> N >> M;

    int *nums = new int[M];
    bool *B = new bool[N];
    
    if ((M == 1) and (N == 1)){
        sum = 0;
    }
    else
        generation(cur, M, N, nums, B, sum);
    
    cout << sum << endl;
    
    return 0;
}

