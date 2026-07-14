#include<bits/stdc++.h>
using namespace std;
int main(){
    int* a = new int[4];
    for(int i=0; i<4;i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i=0; i<3;i++){
        for(int j=0; j<3-i;j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0; i<3;i++){
        if(a[i] == a[i+1])
        ans++;
    }
    cout << ans;
}