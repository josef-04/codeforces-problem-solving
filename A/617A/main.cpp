#include <iostream>
 
using namespace std;
 
int main()
{
    int x,y,c=0;
    cin >> x;
     y=x;
    for(int i=0 ; i<y ; i++)
    {
        x -= 5;
        c ++;
        if(x <= 0)
        {
         break;
        }
 
    }
 
    cout << c;
 
    return 0;
}
