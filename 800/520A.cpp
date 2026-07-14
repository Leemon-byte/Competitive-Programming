#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    char temp = 'A';
    if(n < 26){
        cout << "NO";
        return 0;
    }

    for(int i=0; i<26;i++){
        for(int j=0; j<n;j++){
            if(s[j] == temp || s[j] == temp + 32){
                ans++;
                break;
            }
        }
        temp++;
    }
    
    if(ans == 26)
    cout << "YES";
    else 
    cout << "NO";
}