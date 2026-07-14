//
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    int i = 0;

    string* s = &a;
    string* l = &b;
    bool flag = true;
    while(a[i] != '\0'){
        if(s[i] == l[i]){
            i++;
            continue;
        }
        else if(s[i] < l[i]){
            cout << -1;
            return 0;
        }
        else if(s[i] > l[i]){
            cout << 1;
            return 0;
        }
    }
    cout << 0 <<"\n";
}