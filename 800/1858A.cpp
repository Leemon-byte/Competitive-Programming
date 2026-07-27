#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c; cin >> a >> b >> c;
    if(a > b){
        cout << "First\n";
    }
    else if(a < b){
        cout << "Second\n";
    }
    else {
        if(c % 2 == 0)
        cout << "Second\n";
        else 
        cout << "First\n";
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