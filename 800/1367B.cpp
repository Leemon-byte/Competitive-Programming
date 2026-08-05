#include<bits/stdc++.h>
using namespace std;

void solve(){
    // Input
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    // checking the parities
    int o = 0, e = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 != v[i] % 2){
            if(v[i] % 2 == 0)
            e++;
            else 
            o++;
        }
    }
    if(e == o)
    cout << e << endl;
    else 
    cout << -1 << endl; 
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