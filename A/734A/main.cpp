#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    string s;
    cin >> n >> s;
    int a=0 , d=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'A') a++;
        else d++;
    }
    if(a > d)cout << "Anton";
    else if(d>a) cout << "Danik";
    else cout << "Friendship";
    return 0;
}
