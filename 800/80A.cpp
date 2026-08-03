#include<bits/stdc++.h>
using namespace std;
// most efficient way of finding a prime number
bool isPrime(long long n){
    if(n <= 1)
    return false;
    if(n == 2)
    return true;
    if(n % 2 == 0)
    return false;

    for(int i=3; i*i <= n; i++){
        if(n % i == 0)
        return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin >> n >> m;
    bool flag = true;
    for(int i = n + 1; i < m; i++){ // check if we have a prime in the range
        if(isPrime(i))
        flag = false; // if found then false
    }
    // if no prime found between range and the given m is prime then yes
    if(flag == true && isPrime(m))
    cout << "YES\n";
    else 
    cout << "NO\n";
    return 0;
}