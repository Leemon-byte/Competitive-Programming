#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    char *a = &s[0];
    char *b = &s[n-1];
    int ans = n;
    for(int i=0; i<n/2;i++){
        if(*a == *b){
            break;
        }
        ans -= 2;
        a++;
        b--;
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