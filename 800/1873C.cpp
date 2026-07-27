#include <bits/stdc++.h>
using namespace std;

void solve() {
    // heap allocation
    char** a = new char*[10];
    for(int i=0; i<10;i++){
        a[i] = new char[10];
    }
    // input
    for(int i=0; i<10;i++){
        for(int j=0; j<10;j++){
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for(int i=0; i<10;i++){
        for(int j=0; j<10;j++){
            if(a[i][j] == 'X'){
                if(i == 0 || j == 0 || i == 9 || j == 9)
                ans += 1;
                else if(i == 1 || j == 1 || i == 8 || j == 8)
                ans += 2;
                else if(i == 2 || j == 2 || i == 7 || j == 7)
                ans += 3;
                else if(i == 3 || j == 3 || i == 6 || j == 6)
                ans += 4;
                else if(i == 4 || j == 4 || i == 5 || j == 5)
                ans += 5;
            }
        }
    }
    cout << ans << "\n";
    // deletion
    for(int i=0; i<10;i++){
        delete[] a[i];
    }
    delete[] a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; 
    cin >> tt;
    while (tt--) {
        solve();
    }
    
    return 0;
}