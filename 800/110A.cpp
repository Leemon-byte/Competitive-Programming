#include<iostream>
using namespace std;
int main(){
    long long int n; cin >> n;
    long long int ans = 0;
    while(n != 0){
        if(n % 10 == 4 || n % 10 == 7){
            ans++;
            n /= 10;
        }
        else
        n /= 10; 
    }
    if(ans == 4 || ans == 7){
        cout << "YES";
    }
    else 
    cout << "NO";
}