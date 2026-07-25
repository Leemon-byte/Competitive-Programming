#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> v(n);
    for(int i=0; i<n;i++){
        cin >> v[i];
    }
    // main code
    int max_gap = v[0];
    for(int i=1; i<n;i++){
        max_gap = max(max_gap, v[i] - v[i-1]); 
    }
    max_gap = max(max_gap, 2 * (x - v[n-1]));
    cout << max_gap << '\n';
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