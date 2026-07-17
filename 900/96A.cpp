#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // the better approach was the streak method by checking i and i+1 starting with i = 1
    string s; cin >> s;
    int x = 0, y = 0;
    for(int i=0; i<s.length();i++){
        if(s[i] == '0'){
            x++;
            y = 0;
        }
        else{
            y++;
            x = 0;
        }
        if(x == 7 || y == 7){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}