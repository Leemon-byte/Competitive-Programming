#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        int ans = 0;
        while(n > 0){
            ans += n % 10;
            n /= 10;
        }
        cout << ans << "\n";
    }

    return 0;
}