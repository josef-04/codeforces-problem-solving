#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin >> n>>t;
    string bg;
    cin >> bg;
    char ch;
    for(int i =0; i<t; i++)
    {
        for(int j =0 ; j<n ;j++)
        {
            if(bg[j] == 66 && bg[j+1] == 71)
            {
                ch = bg[j];
                bg[j] = bg[j+1];
                bg[j+1] = ch;
                j++;
            }
        }
    }

    cout << bg << endl;

    return 0;
}