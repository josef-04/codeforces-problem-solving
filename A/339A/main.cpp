#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <list>
using namespace std;
 
int main()
{
 
    string nums="";
    cin >> nums;
    nums.erase(remove(nums.begin(), nums.end(), '+'), nums.end());
    sort(nums.begin() , nums.end());
    int len = nums.length();
    for(int i =0 ; i<len-1 ;i++)
    {
        cout << nums[i]<< "+" ;
    }
 
    cout   << nums[len-1];
 
 
 
    return 0;
}