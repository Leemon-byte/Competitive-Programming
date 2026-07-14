#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--){
        vector<int> v(4);
        for(int i=0; i<4;i++)
        cin >> v[i];

        int temp = v[0];
        int ans = 0;
        for(int i=1; i<4;i++){
            if(temp < v[i])
            ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}