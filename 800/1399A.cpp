#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    cin >> v[i];
    bool flag = true;
    sort(v.begin(), v.end());
    for(int i=0; i<n-1;i++){
        if(abs(v[i] - v[i+1]) > 1){
            flag = false;
        }
    }
    if(flag == false)
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