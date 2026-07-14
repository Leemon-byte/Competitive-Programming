#include<iostream>
using namespace std;

bool d(int num){
    int mask = 0;
    while(num > 0){
        int digit = num % 10;
        int bit = 1 << digit;

        if((mask & bit) > 0)
        return false;

        mask ^= bit;
        num /= 10;
    }
    return true;
}
int main(){
    int n; cin >> n;
    n++;
    bool flag = true;
    while(flag){
        if(d(n) == true)
        flag = false;
        else 
        n++;
    }
    cout << n;
}