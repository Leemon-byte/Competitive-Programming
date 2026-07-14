#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int* a = new int[n];
    int ans = 0;
    for(int i=0; i<n;i++){
      cin >> a[i];  
    }

    for(int i=0; i<n;i++){
        if(a[i] < 1)
        continue;
        else if(a[i] >= a[k-1]){
            ans++;
        }
    }
    cout << ans;
    delete[] a;
}