#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--){
        string s; cin >> s;
        for(int i=0; i<3;i++){
            // conversion into upper case
            if(s[i] >= 97 && s[i] <= 122){
                s[i] -= 32;
            }
        }
        if(s == "YES")
        cout << "YES\n";
        else 
        cout << "NO\n";
    }

    return 0;
}