#include <iostream>
 
using namespace std;
 
int main()
{
    long long n,m,a,x,y;
    cin>>n>>m>>a;
    if(m%a==0){x=m/a;}
    else{x=m/a;x++;}
     if(n%a==0){y=n/a;}
    else{y=n/a;y++;}
    cout <<x*y;
    return 0;
}