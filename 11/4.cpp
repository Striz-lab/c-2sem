#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

    int n;
    cin>>n;
    
    if (n != 1){
        int* CoordsY = new int[n];
        int* MinE = new int[n];
     
        for(int i=0; i<n;i++)
            cin>>CoordsY[i];
     
        MinE[0]=0;
        MinE[1]=abs(CoordsY[1]-CoordsY[0]);
     
        int E1,E2;
        for (int i=2;i<n;i++)
        {
            E1=abs(CoordsY[i]-CoordsY[i-1]);
            E2=3*abs(CoordsY[i]-CoordsY[i-2]);
     
            if (E1+MinE[i-1]<E2+MinE[i-2])
                MinE[i]=E1+MinE[i-1];
            else
                MinE[i]=E2+MinE[i-2];
        }
     
        
        cout<<MinE[n-1]<<endl;
        
        delete [] CoordsY;
        delete [] MinE;
    }
    else{
        int k;
        cin >> k;
        
        cout<< k - n <<endl;
    }
        
    
    return 0;
}
