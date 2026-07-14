#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    int h = 0;
    int ans = 0;
    for(int i=0; i<n;i++){
        if(a[i] == -1 && h == 0){
            ans++;
        }
        else 
        h += a[i];
    }

    cout << ans << "\n";
    return 0;
}