#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;
    string temp = "Timur";
    while(tt--){
        int n; cin >> n;
        string s; cin >> s;
        if(n != 5){
            cout << "NO\n";
            continue;
        }
        int ans = 0;
        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++){
                if(temp[i] == s[j])
                ans++;
        }
    }
    if(ans == 5)
    cout << "YES\n";
    else 
    cout << "NO\n";
    }
    return 0;
}