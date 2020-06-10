#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main() {
    // insert code here...
    int v,z=0,t;
    string s,a,b,c;
    while (1==1){
    cin >> v >> s;
        if (s=="A999AA") break;
        if (v>60){
            a = s[1];
            b = s[2];
            c = s[3];
            if ((a==b) and (b==c))
                z = z+1000;
            else{
                if ((a==b) or (a==c) or (b==c))
                    z = z + 500;
                else
                    z = z+100;
                }
        }
    }

    cout << z << endl;

    return 0;
}
