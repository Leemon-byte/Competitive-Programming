#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    // Two pointer approach
    int* s = &v[0];
    int* e = &v[n-1];

    // 1 2 3 4 5 6
    for(int i=0; i<n/2; i++){
        cout << *s << " ";
        s++;
        cout << *e << " ";
        e--;
    }
    if(n % 2 == 0){
        cout << "\n";
    }
    else
    cout << *s << "\n";
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