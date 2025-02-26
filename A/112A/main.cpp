#include <iostream>
#include <ctype.h>
#include <string>
 
using namespace std;
 
int main()
{
 
 
    string str ="";
    string str2 ="";
    cin >> str >> str2 ;
    int len = str.length();
    string ch;
    for(int i=0; i < len ; i++)
    {
        ch = tolower(str[i]);
        str.replace(i , 1 , ch);
 
        ch = tolower(str2[i]);
        str2.replace(i , 1 , ch);
 
    }
 
    char ch2,ch3;
    int ch2value=0,ch3value=0;
    for(int i=0 ; i < len; i++)
    {
        ch2 = str[i];
        ch2value = int(ch2);
 
        ch3 = str2[i];
        ch3value = int(ch3);
 
        if(ch2value > ch3value)
        {
            cout << 1;
            break;
        }
 
        else if(ch2value < ch3value)
        {
            cout << -1;
            break;
        }
 
       else if(i == len-1 && ch2value == ch3value)
        {
            cout << 0;
        }
 
 
    }
    return 0;
}