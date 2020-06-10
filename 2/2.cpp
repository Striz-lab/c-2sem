#include <iostream>
#include <string>
using namespace std;

int main(){
    int number, ch1=0,ch2=0,ch3=0,ch4=0,x,y;
    cin>>number;
    while (number>0){
        number --;
        cin >> x >> y;
        if (y>0){
            if (x>0) ch1++;
            if (x<0) ch2++;
        }
        if (y<0){
            if (x<0) ch3++;
            if (x>0) ch4++;
        }
    }
    int ch = ch1, nch = 1;
    if (ch2>ch){ch = ch2; nch = 2;}
    if (ch3>ch){ch = ch3; nch = 3;}
    if (ch4>ch){ch = ch4; nch = 4;}
    cout << nch << " " << ch << endl;
    return 0;
}
