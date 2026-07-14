#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        long long int n; cin >> n;
       cout << (n < 3 ? 0 : (n-1)/2) << "\n";
    }
    return 0;
}