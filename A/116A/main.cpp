#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][2];

    for(int i=0; i<n; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            cin >> arr[i][j];
        }
    }

    int mxc= arr[0][1],temp=arr[0][1];

    for(int i =1; i<n-1;i++)
    {
        temp -=arr[i][0];
        temp += arr[i][1];

        if(temp > mxc ) mxc=temp;
    }
    
    cout << mxc;

    return 0;
}