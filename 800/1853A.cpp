#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    cin >> v[i];

    // if not sorted 
    vector<int> temp(v);
    sort(temp.begin(), temp.end());
    if(temp != v){
        cout << 0 << "\n";
        return;
    }
    
    int ans = 0;
    // if sorted
    int min = __INT_MAX__; // maximum value of int
    int index = -1;
    for(int i=0; i<n-1;i++){
        if(v[i+1] - v[i] < min){
            min = v[i+1] - v[i]; // stores the difference
            index = i;
        } 
    }
    ans = (min/2)+1;
    // 5 difference 5 10 3 will be the ansewr with 5/2 = 2+1 = 3
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