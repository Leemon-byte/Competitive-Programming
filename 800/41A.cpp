#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b; cin >> a >> b;
    if(a.length() != b.length()){
        cout << "NO";
        return 0;
    }
    int flag = true;
    for(int i=0,j= a.length()-1; i<a.length(); i++,j--){
        if(a[i] != b[j])
        flag = false;
    }
    if(flag)
    cout << "YES";
    else 
    cout << "NO";
}