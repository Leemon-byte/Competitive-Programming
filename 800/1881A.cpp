#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    string x, s; cin >> x >> s;
    
    for(int i=0; i<6;i++){
        if(x.find(s) != string::npos){ // if find is not equal to not found (means found)
            cout <<  i << "\n";
            return;
        }
        x  += x; // doubles the string
    }
    cout << -1 << "\n"; // if not found
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
// mmmmmmmmmmmmmmmm