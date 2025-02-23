#include <iostream>
 
using namespace std;
 
int main()
{
    int np,x,y,z; cin >> np;
    int total =0;
    do{
        cin >>x>>y>>z;
        if(x==1 && y==1 && z==1){total++;}
        else if(x==1 && y==1 && z==0){total++;}
        else if(x==0 && y==1 && z==1){total++;}
        else if(x==1 && y==0 && z==1){total++;}
      }while(--np);
    cout <<total<<endl;
    return 0;
 
}