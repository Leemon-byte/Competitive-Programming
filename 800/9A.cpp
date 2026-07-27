#include <bits/stdc++.h>
#include<numeric>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    int m = max(a,b);
    int t = 6;
    int p = 7 - m; // number of possible outcomes
    // p = possible outcomes / total outcomes
    int g = gcd(p,t);
    cout << p/g << "/" << t/g << "\n"; 

    return 0;
}