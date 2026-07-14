#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int ans = 0, temp = 0;
    while(n--){
        int a, b; cin >> a >> b;
        temp -= a;
        temp += b;
        if(temp > ans)
        ans = temp;
    }
    cout << ans;
}