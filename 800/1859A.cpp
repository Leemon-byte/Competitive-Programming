#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    cin >> v[i];

    // sort the array
    sort(v.begin(),v.end());

    if(v[0] == v[n-1]){
        cout << -1 << "\n";
        return;
    }
    
    // 2 empty arrays
    vector<int> a, b;
    int max = v[n-1];

    for(int i=0; i<n; i++){
        if(v[i] == max)
        b.push_back(v[i]);
        else
        a.push_back(v[i]);        
    }

    // if all condition are met then print
    cout << a.size() << " " << b.size() << "\n";
    
    for(int i=0; i<a.size();i++)
    cout << a[i] << " ";
    cout << "\n";

    for(int i=0; i<b.size();i++)
    cout << b[i] << " ";
    cout << "\n";
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