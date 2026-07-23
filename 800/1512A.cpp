#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    cin >> v[i];
    // main code
    int a = v[0];
    int b = v[1];
    if(a == b){
        for(int i=2; i<n;i++){
            if(v[i] != a){
                cout << i+1 << "\n";
                return;
            }
        }
    }
    if(a != b){
        if(v[2] == a)
        cout << 2 << "\n";
        else 
        cout << 1 << "\n";
    }
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