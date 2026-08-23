#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, k;
    cin >> x >> k;

    if(x % k != 0){  // if it does not divides x them jump that many steps
        cout << 1 << "\n" << x << "\n";
    }
    else{ // if divides the -1 one and jump that many steps
        cout << 2 << "\n" << x-1 << " " << 1 << "\n";
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