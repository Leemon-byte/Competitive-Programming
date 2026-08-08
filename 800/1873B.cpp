#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    cin >> v[i];

    // find the minimum value index
    int min = 10; // 0 <= ai <= 9 
    int index = -1;
    for(int i=0; i<n;i++){
        if(v[i] < min){
            min = v[i];
            index = i;
        }
    }
    // Increment the minimum
    v[index]++;
    int ans = 1;
    for(int i=0; i<n;i++){
        ans *= v[i];
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