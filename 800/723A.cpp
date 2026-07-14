#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // did not knew the formula for min distance
    int a[3];
    for(int i=0; i<3;i++){
        cin >> a[i];
    }
    sort(a, a+3);
    int meet = a[1]; // middle value
    int ans = abs(a[0] - meet) + abs(a[1]-meet) + abs(a[2]-meet);
    cout << ans << "\n";
}