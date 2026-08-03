#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    for(int i=0; i<s.length(); i++){
        if(i == s.length() - 1){
            cout << s[i];
            break;
        }
        if(i % 2 == 0){
            cout << s[i];
        }
        else 
        continue;
    }
    cout << '\n';
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