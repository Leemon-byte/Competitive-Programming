#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if(n % 4 != 0){
        cout << "NO\n";
        return;
    }

    vector<int> v;
    // elements;
    int sum = 0;
    // even elements
    for(int i = 1; i <= n/2; i++){
        v.push_back(2*i);
        sum += 2*i;
    }
    int s = 0;
    // odd elements
    for(int i = 0; i < n/2 - 1; i++){
        v.push_back((i*2)+1);
        s += (i*2)+1;
    }
    int last_element = sum - s;
    v.push_back(last_element);
    // display
    if(sum == s + last_element){
        cout << "YES\n";
        for(int x : v){
            cout << x << " ";
        }
        cout << endl;
    }
    else 
    cout << "NO\n";
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