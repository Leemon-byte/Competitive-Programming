#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;

    int p; cin >> p;
    vector<int> a(p);
    for(int i=0; i<p;i++){
        cin >> a[i];
    }

    int q; cin >> q;
    vector<int> b(q);
    for(int i=0; i<q;i++){
        cin >> b[i];
    }

    for(int i=1;i<=tt;i++){
        bool flag = true;
        for(int j=0; j<p;j++){
            if(a[j] == i){
                flag = false;
            }
        }
        if(flag){
            for(int k = 0; k<q;k++){
                if(b[k] == i){
                   flag = false; 
                }
            }
        }
        if(flag){
            cout << "Oh, my keyboard!" << "\n";
            return 0;
        }
    }
    cout << "I become the guy." << "\n";
    return 0;
}