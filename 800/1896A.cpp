#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    cin >> v[i];
    
    // to get enough swaps for soritng (bubble sort)
    for(int i=0; i<n;i++){
        for(int i=1; i<n-1;i++){
            if(v[i-1] < v[i] && v[i] > v[i+1]){
                // swap the values
                int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
            }
        }
    }
    // if sorted then yes else no
    bool flag = true;
    for(int i=0; i<n-1;i++){
        if(v[i] > v[i+1]) // means not sorted
        flag = false;
    }
    if(flag)
    cout << "YES\n";
    else 
    cout << "NO\n";
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