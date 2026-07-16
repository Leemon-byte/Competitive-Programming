#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string val = "Timur";
    sort(val.begin(), val.end());
    
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        string a; cin >> a;
        sort(a.begin(), a.end());
        if(a == val)
        cout << "YES\n";
        else 
        cout << "NO\n";
    }

    return 0;
}