#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    cin >> v[i];
    // conversion into the left years they have
    for(int i=0; i<n;i++)
    v[i] = 5 - v[i];
    
    int ans = 0;
    for(int i=0; i<n;i++){
        if(v[i] >= k)
        ans++;
    }
    int xio = ans/3;
    cout << xio << '\n'; 
    return 0;
}