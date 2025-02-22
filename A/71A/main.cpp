#include <iostream>
 
using namespace std;
 
int main()
{
    int numwords;
    cin>> numwords;
    do{string input; cin>> input;
        int inputsize = input.size();
    if(inputsize <= 10){cout << input<<endl;}
    else{cout<<input[0]<<inputsize-2<<input[inputsize-1]<<endl;}
 
    }while(--numwords);
    return 0;
}