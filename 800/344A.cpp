#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    n--;
    int ans = 0;
    int temp; cin >> temp;
    while(n--){
        int a; cin >> a;
        if(a != temp){
            temp = a;
            ans++;
        }
    }
    cout << ++ans;   
}