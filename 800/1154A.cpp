#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(4);
    // this will store the values abc
    vector<int> vec(3);
    for(int i=0; i<4; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int max = v[3]; // maximum value
    int a = 0, b = 0, c = 0;
    a = (v[0] + v[1]) - max;
    b = (v[1] + v[2]) - max;
    c = (v[0] + v[2]) - max;
    cout << a << " " << b << " " << c << " "; 
    return 0;
}