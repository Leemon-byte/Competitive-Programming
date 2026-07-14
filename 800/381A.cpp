#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n;i++)
    cin >> a[i];
    // points of each player
    int x = 0, y = 0;
    int turn = 1;
    while(a.size() != 0){
        if(turn % 2 != 0){   
        if(a.front() > a.back()){
            x += a.front();
            a.erase(a.begin());
        }
        else {
            x += a.back();
            a.pop_back();
        }
        turn++;
        }   
    else {
        if(a.front() > a.back()){
            y += a.front();
            a.erase(a.begin());
        }
        else {
            y += a.back();
            a.pop_back();
        }
        turn++;
    }
    }
    cout << x << " " << y << "\n"; 
    return 0;
}