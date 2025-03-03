#include <iostream>
 
using namespace std;
 
int main()
{
    string word ;
    cin >> word;
    char ch;
    int uc=0,lc=0;
    for(int i=0; i<word.length();i++)
    {
        ch = word[i];
        if( isupper(ch))
        {
            uc ++;
        }
        else
        {
            lc ++;
        }
    }
 
 
    if(uc > lc)
    {
        for(int i=0 ; i<word.length(); i++)
        {
            int c = word[i];
            if (islower(c))
            word[i] = toupper(c);
        }
    }
    else if(uc < lc )
    {
        for(int i=0 ; i<word.length(); i++)
        {
            int c2 = word[i];
            if (isupper(c2))
            word[i] = tolower(c2);
        }
 
    }
    else
    {
        for(int i=0 ; i<word.length(); i++)
        {
            int c2 = word[i];
            if (isupper(c2))
            word[i] = tolower(c2);
        }
 
    }
 
   cout << word;
 
    return 0;
}
