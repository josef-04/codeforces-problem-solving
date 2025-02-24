#include <iostream>
#include<algorithm>
 
using namespace std;
 
 
 
int main()
{
    int n,nth;
    int innth = 0;
    int inc = 0;
    cin>> n >> nth;
 
    int arr[n];
 
    for(int i=0; i<n ; i++)
    {
        cin>> arr[i];
    }
 
    sort(arr , arr+n , greater<int>());
 
    innth = arr[nth-1];
 
    for(int i =0; i<n ; i++)
    {
        if(arr[i] >= innth & arr[i] > 0)
        {
            inc++;
        }
    }
 
cout << inc;
 
    return 0;
}