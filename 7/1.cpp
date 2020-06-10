
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    float f = .2;
    double d = 0.2;

    cout << f << endl;
    printf("%.12f\n", f);
    printf("%.30lf\n", d);

    if (f == 0.2)
        cout << "They are equal!" << endl;

    float epsilon = 0.0001;

    if (f - 0.2 < epsilon)
        cout << "They are ~~~ equal!" << endl;

    float bigf = 1000000000.0;
    cout << bigf << endl;
    cout << bigf + 1 << endl;
    printf("%e\n", bigf);
    printf("%.12f\n", bigf + 1);

    unsigned i = 5;
    i = i >> 1; // 101  -> 10
    i >>= 1; // this is equal
    i = i << 2; // -> 1000
    if (i & (1 << i))
        cout << "nechetnoe" << endl;

    unsigned nei = ~i;
    unsigned ori = i | 1;
    unsigned xori = i ^ 1;
    // . | 0 | 1 
    //-----------
    // 0 | 0   1
    // 1 | 1   0

    unsigned *heap_u = new unsigned;

    //uint32_t u32;
    //int32_t
    //uint8_t
    //uint16_t
    //uint64_t

    sizeof(int);   // 4
    sizeof(char);  // 1

    unsigned *pf = (unsigned*)&f;
    uint64_t *pd = (uint64_t*)&d;
    //reinterpret_cast
    //dynamic_cast
    //static_cast
    //const_cast

    delete heap_u;
    return 0;
}

