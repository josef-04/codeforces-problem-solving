#include <iostream>
 
using namespace std;
 
int main()
{
    int k,n,w,sum=0,total=0;
    cin >> k >> n >> w;
 
    for(int i =0 ; i <= w; i++)
    {
        sum = i*k;
        total += sum;
    }
    int temp= total-n;
    if(temp = 0 || temp < 0 )
    {
        cout << 0;
    }
    else
    {
    total = total - n;
    cout << total;
    }
 
    return 0;
}
