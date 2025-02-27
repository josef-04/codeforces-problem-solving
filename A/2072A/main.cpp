#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k ,p;
        cin >> n >> k >> p;
        k = abs(k);
        int check = p * n;
        if(k > check){
            cout << -1 << endl;
            continue;
        }
        else if(check == k){
            cout << n << endl;
            continue;
        }
        else{
            int ans = k / p;
            if(k % p != 0)ans++;
            cout << ans << endl;
        }
    }
    return 0;
 
}