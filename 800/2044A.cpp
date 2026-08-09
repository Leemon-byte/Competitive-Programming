#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int ans = 0;
    for(int i=1; i<n;i++){
        for(int j=1; j<n;j++){
            if(i+j == n)
            ans++;           
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