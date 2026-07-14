#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n;i++)
    cin >> a[i];

    int ans = 0;
    for(int i=1; i<n;i++){
        bool min = true;
        bool max = true;
        int temp = a[i];
        for(int j=0; j<i;j++){
            if(temp <= a[j])
            min = false;

            if(temp >= a[j])
            max = false;
        }
        if(min == true|| max == true){
            ans++;
        }   
    }
    cout << ans << "\n";
    return 0;
}