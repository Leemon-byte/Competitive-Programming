#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string a, b;
    cin >> a >> b;

    for(int i=0; i<a.length();i++){
        if((a[i] == 'R' && b[i] != 'R') || (b[i] == 'R' && a[i] != 'R')){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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