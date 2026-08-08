#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    // if length not even then not possible
    if(s.length() % 2 != 0){
        cout << "NO\n";
        return;
    }

    // Compare first half with second half
    for(int i=0; i<s.length()/2; i++){
        if(s[i] != s[(s.length()/2)+i]){
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