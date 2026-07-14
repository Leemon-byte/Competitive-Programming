#include<bits/stdc++.h>
using namespace std;
int main(){
    int c, s, e;
    cin >> c >> s >> e;
    int sum = 0;
    for(int i=1; i<=e; i++){
        sum += i*c;
    }
    int ans = 0;
    if(s >= sum)
    cout << 0;
    else {
        ans = sum - s;
        cout << ans;
    }

    return 0;
}