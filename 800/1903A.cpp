#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--){
        // number of boxes and max reverse 
        int n, k; cin >> n >> k;
        vector<int> v(n), a(n);
        for(int i=0; i<n;i++)
        cin >> v[i];
        bool flag = false;
        // copy the vector into another for comparision
        a = v;
        // can also do this manually by checking the indices(i and i+1)
        sort(a.begin(), a.end());
        if(a == v)
        flag = true;
        if(k == 1 && !flag){
            cout << "NO\n";
        }
        else
        cout << "YES\n";
    }
    return 0;
}