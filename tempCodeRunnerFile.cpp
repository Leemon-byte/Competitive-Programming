#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    cin >> v[i];

    int ans = 0;
    int min = v[0];
    for(int i=1; i<n;i++){
        if(min > v[i])
        min = v[i];
    }
    // main code 
    for(int i=0; i<n;i++){
        ans += v[i] - min;
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