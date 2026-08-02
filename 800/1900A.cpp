#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    int temp = 0;
    bool flag = false;
    for(int i=0; i<n;i++){
        if(s[i] == '.'){
            temp++;
            ans++;
        }
        if(temp >= 3){
            ans = 2;
            break;
        }
        if(s[i] == '#'){    
            temp = 0;
        }
    }
    cout << ans << "\n";
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