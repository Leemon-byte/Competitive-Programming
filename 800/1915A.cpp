#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int x, y, z; cin >> x >> y >> z;
        int ans = x^y^z;
        cout << ans << endl;
    }
    return 0;
}