#include <bits/stdc++.h>
using namespace std;

void solve() {
    char c; cin >> c;
    // frs
    if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's'){
        cout << "YES\n";
    }
    else 
    cout << "NO\n";
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