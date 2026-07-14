#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int* a = new int[n];
    bool flag = false;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] == 1)
        flag = true;
    }
    if(flag)
    cout << "HARD";
    else
    cout << "EASY";
    
    delete[] a;
}