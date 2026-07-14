#include<iostream>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        int a = 0, b = 0;
        for(int i=0;i<6;i++){
            if(i < 3){
                b += n % 10;
                n /= 10;
            }
            else if(i >= 3){
                a += n % 10;
                n /= 10;
            }
        }
        if(a == b)
        cout << "YES\n";
        else 
        cout << "NO\n";
    }
    return 0;
}