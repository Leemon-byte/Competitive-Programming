#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    //one more case cba
    if(s[0] == 'c' && s[2] == 'a'){
        cout << "YES\n";
        return;
    }
    else if(s[0] == 'c' || s[2] == 'a')
    cout << "NO\n";
    else 
    cout << "YES\n";
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