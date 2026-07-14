#include<iostream>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        int a, b; cin >> a >> b;
        int rem = a%b;
        int ans = (rem == 0) ? 0 : (b - rem);
        cout << ans << "\n";
    }
    return 0;
}