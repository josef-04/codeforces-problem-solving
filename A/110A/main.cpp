#include <iostream>
using namespace std; 
int main() {
    string nums;
    cin >> nums;
    int lucky=0,len = nums.length();
    for(int i=0 ; i<len; i++)
    {
        if(nums[i] == 52 || nums[i] == 55)
        {
            lucky ++;
        }
    }
    if(lucky == 4 || lucky == 7)cout << "YES";
    else cout << "NO";
    return 0;
}
