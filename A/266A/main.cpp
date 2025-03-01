
#include <iostream>
using namespace std;
int main() {
    int n,c=0;
    string stons;
    cin >> n>> stons;
    while(n--)
    {
        if(stons[n] == stons[n-1]) c++;
    }
    cout << c;
    return 0;
}
