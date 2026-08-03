#include<bits/stdc++.h>
using namespace std;

// global variables
int a = 0, b = 0;

void solve(){
    int x, y; cin >> x >> y;
    if(x > y)
    a++;
    else if(y > x)
    b++;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt; cin >> tt;
    while(tt--){
        solve();
    }
    if(a == b)
    cout << "Friendship is magic!^^\n";
    else if(a > b)
    cout << "Mishka\n";
    else if(b > a)
    cout << "Chris\n";

    return 0;
}