#include<iostream>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    int* A = new int[a];
    for(int i=0; i<a;i++){
        cin >> A[i];
    }
    int ans = 0;
    for(int i=0; i<a;i++){
        if(A[i] <= b)
        ans++;
        else if(A[i] > b)
        ans += 2;
    }
    cout << ans;
    delete[] A;
}