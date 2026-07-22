#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin >> n;
   vector<int> v(n);
   int val = 0;
   for(int i=0; i<n;i++){
    cin >> v[i];
    if(v[i] == 2)
    val++; // total number of 2s
   }
   if(val % 2 != 0){
    cout << -1 << "\n";
    return;
   }
   int half = val / 2;
   val = 0;
   for(int i=0; i<n;i++){
    if(v[i] == 2)
    val++;
        if(val == half){
            cout << i+1 << "\n";
            return;
        }
   }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--){
        solve();
    }

    return 0;
}