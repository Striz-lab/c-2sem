#include <iostream>


using std::cin;
using std::cout;
using std::endl;

int main() {
    // insert code here...
    float a,b,c,d,e,f,g,h,i,j;
    double x1,x2;
    int L = 0;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    
    if ((a == 1) or (b >= 37.5)){
        if (c == 1){ //боль в горле
            if (d == 1)
                L = 1;
            else
                L = 2;
        }
        else{
            if ((e == 1) or (f == 1))
                L = 2;
            else{
                if (g == 1)
                    L = 2;
                else
                    L = 3;
            }
        }
            
    }
    if ((a == 0) and (b < 37.5)){
        if (c == 1){
            if ((i == 1) or (j == 1))
                L = 2;
            else{
                if ((e == 1) or (f == 1))
                    L = 3;
                if ((e == 0) and (f == 0))
                    L = 4;
            }
        }
        else{
            if ((g == 1) or (h ==1))
                L = 3;
            if ((g == 0) and (h == 0))
                L = 4;
        }
    }
    
    cout << L << endl;
    
    return 0;
}

