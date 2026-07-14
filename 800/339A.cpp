#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    // Bubble sort
    int n = s.length(); // number of elements

    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-1-i;j++){
            if(s[j] == '+')
            continue;
            if(s[j] > s[j+2]){
                int temp = s[j];
                s[j] = s[j+2];
                s[j+2] = temp;
            }
        }
    }
    cout << s << endl;
    return 0;
}