#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a; cin >> a;
    int ans = 0;
    ans += (a[0] - '0')+ (a[2] - '0');
    cout << ans << '\n';
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