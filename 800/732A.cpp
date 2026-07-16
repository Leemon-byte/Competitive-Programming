#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, r;
    cin >> k >> r;
    int i = 1;
    while(1){
        if(k*i % 10 == 0){
            break;
        }
        else if(((k*i) - r) % 10 == 0){
            break; 
        }
        i++;
    }
    cout << i << "\n";
    return 0;
}