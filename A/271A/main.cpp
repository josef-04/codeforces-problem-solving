#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;

    for(int i=n+1; ; i++)
    {
        ostringstream str ;
        str << i;
        s = str.str();
        if(s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] &&s[2] != s[3] )
        {
            cout << i;
            break;
        }


    }




    return 0;
}
