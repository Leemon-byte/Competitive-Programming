#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        int ans = 0;
        int h, m; cin >> h >> m;
        while(h != 24){
            m++;
            ans++;
            if(m == 60){
                h++;
                m = 0;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}