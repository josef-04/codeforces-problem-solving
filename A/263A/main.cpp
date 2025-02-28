#include <iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int store=0;
    int x;
    for(int i=1 ; i<=5; i++)
    {
        for(int j=1; j<=5;j++)
        {
            cin >>x;
            if(x == 1)
            {
                store=abs(i - 3)+abs(j-3);
            }
        }
    }
    cout<<store;
 
 
    return 0;
}