#include<bits/stdc++.h>
using namespace std;

void solve(){
    int ans = 0;

    int n; cin >> n;
    string s; cin >> s;

    const int size = 26;
    int a[size] = {};

    for(int i=0; i<n; i++){
        int v = s[i] - 65;
        if(a[v] == 0){
            ans += 2;
        }
        else
        ans++;

        a[v]++; // counting the  freq
    }
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