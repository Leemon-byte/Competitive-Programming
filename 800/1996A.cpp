#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n; // n is even number
    // for case 2
    if(n < 4){
        cout << 1 << "\n";
        return;
    }

    if(n % 4 == 0){
        cout << n/4 << "\n";
        return;
    }
    else{
        cout << ((n-2)/4 + 1) << "\n";
    }
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