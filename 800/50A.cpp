#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    int tt = n*k;
    int ans = 0;
    if(tt % 2 == 0){
        ans = tt / 2;
    }
    else if(tt % 2 != 0){
        --tt;
        ans = tt / 2;
    }
    cout << ans;
}