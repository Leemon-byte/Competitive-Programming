#include<bits/stdc++.h>
using namespace std;

void solve(){
    // k is the maximum integer
    int x, y, n; 
    cin >> x >> y >> n;
    // finds the maximum mutiple and add the required remainder to it
    // k % x == y  (0 <= k <= n)
    long long ans = (n/x)*x+y;
    if(ans > n){
        ans -= x;
    }
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt; cin >> tt;
    while(tt--){
        solve();
    }

    return 0;
}