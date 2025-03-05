#include <iostream>
 
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    int c0=0,c1=0;
    int len=str.length();
    bool yes=0;
    for(int i=0; i<len; i++)
    {
 
        if(str[i]==48 && str[i+1]==48)
        {
          c0++;
          if(c0 >= 6 )
          {
              yes=1;
          }
 
        }
        else if(str[i]==48 && str[i+1]==49)
        {
              c0 = 0;
        }
 
 
       else if(str[i]==49 && str[i+1]==49)
        {
 
           c1++;
          if(c1 >= 6 )
          {
              yes=1;
          }
 
        }
        else if(str[i]==49 && str[i+1]==48)
          {
              c1=0;
          }
 
 
 
    }
    if(yes ==1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
 
    return 0;
}
