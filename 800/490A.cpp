#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    cin >> v[i];

    int a = 0, b = 0, c = 0;
    for(int i=0; i<n;i++){
        if(v[i] == 1)
        a++;
        else if(v[i] == 2)
        b++;
        else if(v[i] == 3)
        c++;
    }
    int minimum = min({a,b,c});
    cout << minimum << "\n";
    // now we also needs to print the indexs of the students
    for(int i=0; i<minimum; i++){
        for(int j=1; j<=3;j++){
            for(int k=0; k<n;k++){
                if(v[k] == j){
                    cout << k+1 << " ";
                    v[k] = -1;
                    break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}