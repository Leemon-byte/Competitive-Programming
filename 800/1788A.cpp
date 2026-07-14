#include<bits/stdc++.h>
using namespace std;
int ans(){
        int n; cin >> n;
        int* a = new int[n];
        for(int i=0; i<n;i++)
        cin >> a[i];

        long long int temp = 1;
        for(int i=0;i<n;i++){
            long long int ans = 1;
            temp *= a[i];
            for(long long int j=i+1; j<n;j++){
                ans *= a[j];
            }
            if(ans == temp)
            return i+1;
        }
        return -1;
        delete[] a;
}

int main(){
    int tt; cin >> tt;
    while(tt--){
        cout << ans() <<  "\n";
    }
    return 0;
}