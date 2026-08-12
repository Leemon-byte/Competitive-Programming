#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    cin >> v[i];

    int max = v[0];
    for(int i=1; i<n;i++){
        if(max < v[i])
        max = v[i];
    }
    // modify the vector
    int new_max = 0;
    for(int i=0;i<n;i++){
        v[i] = max - v[i];
        if(v[i] > new_max){
           new_max = v[i]; 
        }
    }
    cout << new_max << '\n';
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