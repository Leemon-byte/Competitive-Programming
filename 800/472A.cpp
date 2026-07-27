#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1)
    return false;

    if(n == 2)
    return true;

    if(n % 2 == 0)
    return false;

    for(int i=3; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x; cin >> x;
    bool flag = true;
        int val = 0;
        while(flag){
            x -= 2;
            val += 2;
            if(!isPrime(x) && !isPrime(val)){
                cout << val << " " << x;
                flag = false;
            }
        }
    return 0;
}