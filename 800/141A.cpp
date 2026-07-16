#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // by sorting
    string a, b, x;
    cin >> a >> b >> x;
    if(a.size() + b.size() != x.size()){
        cout << "NO";
        return 0;
    }
    string temp = "";
    temp += a + b;
    sort(temp.begin(),temp.end());
    sort(x.begin(), x.end());
    if(temp == x)
    cout << "YES";
    else
    cout << "NO";

    return 0;
}