#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x; cin >> x;
    // convert into string 
    string s = to_string(x);
    // -0 because it stores the ASCII value instead of digit
    int p = s[0] - '0'; // p * the sum
    p--; 
    int ans = 0;

    if(s.length() == 4)
    ans = (p*10) + 10;
    if(s.length() == 3)
    ans = (p*10) + 6;
    if(s.length() == 2)
    ans = (p*10) + 3;
    if(s.length() == 1)
    ans = (p*10) + 1;

    cout << ans << "\n";
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