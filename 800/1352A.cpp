#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // logic was easier but took time and with vector is was more easier than array (used help :(  )
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<int> vec;
        int p = 1;
        while(n > 0){
            int d = n % 10;
            if(d != 0){
                vec.push_back(d*p);
            }

            n /= 10;
            p *= 10;
        }

        cout << vec.size() << "\n";
        for(int x : vec){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}