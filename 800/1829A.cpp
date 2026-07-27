#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str = "codeforces";
    string s; cin >> s;
    int ans = 0;
    for(int i=0; i<10;i++){
        if(s[i] != str[i])
        ans++;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; 
    cin >> tt;
    while (tt--) {
        solve();
    }
    
    return 0;
}