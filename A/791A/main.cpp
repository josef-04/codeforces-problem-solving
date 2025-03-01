#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b;
    cin >> a >> b;
    int years=0;
    for( ; ; )
    {
        a *= 3;
        b *= 2;
 
         years++;
 
         if(a > b)
         {
             break;
         }
 
    }
    cout << years;
    return 0;
}