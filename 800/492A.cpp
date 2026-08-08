#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    // n(n+1)(n+2)/6
    int i = 1;
    // check if the sum exceeds the cubes limit  
    while(i*(i+1)*(i+2)/6 <= n){
        i++;
    }
    // minus one to go back at the number before loop fails
    cout << i - 1 << "\n";
    return 0;
}