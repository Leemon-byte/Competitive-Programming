#include<iostream>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        int ans = 0;
        for(int i=0;i<n;i++){
            ans++;
            while(ans % 3 == 0 || ans % 10 == 3)
            ans++;
        }
        cout << ans << "\n";
    }
}