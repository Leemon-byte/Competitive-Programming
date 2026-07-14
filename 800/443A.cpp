#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin,line);
    int a[26] = {};
    for(int i=0; i<line.length();i++){
        if(line[i] == '}')
        break;
        if(line[i] == '{' || line[i] == ' ' || line[i] == ',')
        continue;
        // logic of the code;
        int index = line[i] - 'a';
        a[index]++;
    }
    // counting of distinct elements
    int ans = 0;
    for(int i=0; i<26;i++){
        if(a[i] != 0)
        ans++;
    }
    cout << ans << "\n";
}