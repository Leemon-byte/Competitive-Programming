#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 49)
        ans += a;
        else if(s[i] == 50)
        ans += b;
        else if(s[i] == 51)
        ans += c;
        else if(s[i] == 52)
        ans += d;
    }
    cout << ans;
    return 0;
}