#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == b && a == c && a == d)
    cout << "YES" << "\n";
    else 
    cout << "NO" << "\n";
    }
}