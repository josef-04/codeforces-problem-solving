#include <iostream>
#include <set>
 
 
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    set<char> user;
    int len = str.length();
    for(int i =0 ; i<len ; i++)
    {
      user.insert(str[i]);
     }
 
    int len2 = user.size();
 
     //cout << len1;
    if(len2%2 == 0)
     {
        cout << "CHAT WITH HER!" << endl;
     }
     else
     {
       cout << "IGNORE HIM!" << endl;
     }
    return 0;
}