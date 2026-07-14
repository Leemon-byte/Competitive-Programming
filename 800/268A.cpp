#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n*2); // double the size
    for(int i=0; i<n*2;i++){
        cin >> v[i];
    }
    int ans = 0;
    for(int i=0; i<n*2;i+=2){
        int temp = v[i];
        for(int j=1;j<n*2;j+=2){
            if(i + 1 == j)
            continue;
            if(temp == v[j])
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}