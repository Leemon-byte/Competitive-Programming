#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(long long i=0; i<n;i++){
        cin >> v[i];
    }
    // using hashmap
    unordered_set<int> seen;
    // if duplicates then not possible to sort them 
    for(int i=0; i<n;i++){
        if(seen.count(v[i])){ // if seen already (1)
            cout << "NO\n";
            return;
        }
        seen.insert(v[i]); // else insert the element 
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