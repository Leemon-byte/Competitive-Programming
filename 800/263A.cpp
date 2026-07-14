#include<bits/stdc++.h>
using namespace std;

int main(){
    const int size = 5;
    int row = 0, col = 0;
    int a[size][size] = {};
    for(int i=0; i<size;i++){
        for(int j=0; j<size;j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                row = i + 1;
                col = j + 1;
            }
        }
    }
    int ans = 0;
    while(1){
        if(col == 3 && row == 3)
        break;

        if(col < 3){
            col++;
            ans++;
        }
        if(col > 3){
            col--;
            ans++;
        }
        if(row < 3){
            row++;
            ans++;
        }
        if(row > 3){
            row--;
            ans++;
        }
    }
    cout << ans;
}