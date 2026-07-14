#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int* a = new int[n];
    int temp = 0;
    for(int i=0; i<n;i++){
        cin >> a[i];
        if(a[i] > temp)
        temp = a[i];
    }
    if(n == 1){
        cout << 0;
        return 0;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        while(a[i] < temp){
            a[i]++;
            ans++;
        }
    }
    cout << ans;
    delete[] a;
}