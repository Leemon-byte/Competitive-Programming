#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // using maths
    int a, b;
    cin >> a >> b;
    // x is the number of fasionable pairs 
    int x = 0, y = 0;
    if(a < b){
    x = a;
    a = 0;
    b -= x;
    y = b/2;
    }
    else {
    x = b;
    b = 0;
    a -= x;
    y = a/2;
    }
    cout << x << " " << y << '\n';
    return 0;
}