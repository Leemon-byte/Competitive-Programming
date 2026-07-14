#include<bits/stdc++.h>
using namespace std;

int len(string str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
 int n; cin >> n;
 while(n--){
    string s; cin >> s;
    int x = len(s);
    if(x > 10){
        cout << s[0] << x - 2 << s[x-1] << "\n";
    }
    else 
    cout << s  << "\n";
 }   
}