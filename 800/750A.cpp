#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    int time = 240;
    time -= k;
    int ans = 0;
    for(int i=1; i<=n;i++){
        int val = i*5;
        if(time >= val){
        time -= val;
        ans++;
        }
        else 
        break;
    }
    cout << ans << "\n";
    return 0;
}