#include <iostream>
 
using namespace std;
 
int main()
{
    string str;
    cin >> str;
 
    char ch;
    int len = str.length();
 
    for(int i=0; i<len;i++)
    {
        ch = tolower(str[i]);
        str[i] = ch;
    }
    for(int i=0; i<len;i++ )
    {
        if(str[i] == 97 || str[i] == 111 || str[i] == 121 || str[i] == 101 || str[i] ==117 || str[i] == 105 )
        {
           str.erase(str.begin()+i);
           i--;
        }
    }
    len = str.length();
    for(int i=0; i<len; i++)
    {
        cout<< "."<< str[i];
    }
    return 0;
}
