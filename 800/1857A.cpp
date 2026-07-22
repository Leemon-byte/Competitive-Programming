#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<int> v(n);
        int ans = 0;
        for(int i=0; i<n;i++){
            cin >> v[i];
            if(v[i] % 2 != 0)
            ans++;
        }
        if(ans % 2 == 0)
        cout << "YES\n";
        else 
        cout << "NO\n";
    }
    return 0;
}