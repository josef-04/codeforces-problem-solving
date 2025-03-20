#include <iostream>

using namespace std;

int main()
{
    string word,word2;
    cin >> word >> word2;
    int len = word.length(),ln =len-1;
    bool no=0;

    for(int i =0 ; i < len;i++ )
    {
        if( word[i] != word2[ln-i]) no=1;
    }
    if( no == 1) cout << "NO";
    else cout<<"YES";
    return 0;
}
