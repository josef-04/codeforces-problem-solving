#include <iostream>
 
using namespace std;
 
int main()
{
    int z=0;
    int x;
    cin >> x;
     string y[x];
 
     for(int i=0;i<x;i++)
    {
      cin >>y[i];
    if(y[i] == "X++" || y[i] == "++X" )z++;
    else if(y[i] == "X--" || y[i] == "--X")z--;
    }
    cout<< z <<endl;
    return 0;
}