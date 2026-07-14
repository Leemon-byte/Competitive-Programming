#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a = 0;
    for(int i=1;i<=n;i++){
        if(i == n && i % 2 == 0){
            cout << "I love it ";
        }
        else if(i == n && i % 2 != 0){
            cout << "I hate it ";
        }
        if(i < n && i % 2 == 0){
            cout << "I love that ";
        }
        if(i < n && i % 2 != 0){
            cout << "I hate that ";
        } 
    }
    return 0;
}