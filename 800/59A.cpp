#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int l = 0, u = 0;
    for(int i=0; i<s.length();i++){
        if(s[i] >= 65 && s[i] <= 90)
        u++;
        else 
        l++;
    }
    if(u > l){
        for(int i=0; i<s.length();i++){
            if(s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
        }
    }
    else if(l >= u){
        for(int i=0; i<s.length();i++){
            if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        }
    }
    cout << s;
}