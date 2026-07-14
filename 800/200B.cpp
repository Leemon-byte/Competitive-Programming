#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    double* a = new double[n];
    double ans = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        a[i] = a[i]/100;
        ans += a[i];
    }
    double val = (ans/n)*100;
    cout << val;
    delete[] a;
    return 0;
}