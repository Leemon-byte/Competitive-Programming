#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    cin >> v[i];

    int a=0, b=0;
    for(int i=0; i<n;i++){
        if(v[i] == 1)
        a++;
        else 
        b++;
    }
    
    int t = a*1 + b*2;
    if(t%2 != 0){
        cout << "NO\n";
        return;
    }
    else{
        int h = t/2;
        if(h%2 == 0 || a > 1){
            cout << "YES\n";
        }
        else
        cout << "NO\n";
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