#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t; cin >> n >> t;
    string s; cin >> s;
    
    for(int i=0; i<t;i++){
        bool swap = false;
        for(int j=0; j<n-1;j++){
            if(!swap){
                if(s[j] == 'B' && s[j+1] == 'G'){
                    s[j] = 'G';
                    s[j+1] = 'B';
                    swap = true;
                }
            }
            else
            swap = false;
        }
    }
    cout << s;
}