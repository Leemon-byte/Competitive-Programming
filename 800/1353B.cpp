#include<bits/stdc++.h>
using namespace std;

// greedy solution
void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n), vec(n);
    for(int i=0; i<n;i++)
    cin >> v[i];
    for(int i=0; i<n;i++)
    cin >> vec[i];

    sort(v.begin(), v.end()); // asending 
    sort(vec.begin(), vec.end(), greater<int>()); // desending
    // swaps smallest with the largest
    for(int i=0; i<n && i<k; i++){
        if(v[i] < vec[i]){
            // swap the elements
            int temp = v[i];
            v[i] = vec[i];
            vec[i] = temp;
        }
    }
    // maximum sum 
    int sum = 0;
    for(int i=0; i<n;i++)
    sum += v[i];

    cout << sum << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt; cin >> tt;
    while(tt--){
        solve();
    }

    return 0;
}