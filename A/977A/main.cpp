#include <iostream>
#include <sstream>
using namespace std;
 
int main()
{
    int n,k;
    cin >> n >>k;
 
    ostringstream str1;
 
    for(int i=0; i<k; i++)
    {
 
        str1 << n;
        string str = str1.str();
        if(str[str.length()-1] == 48) n /=10;
        else n--;
    }
    cout << n;
    return 0;
}
