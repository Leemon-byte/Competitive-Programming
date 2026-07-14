#include<bits/stdc++.h>
using namespace std;
int main(){
    const int size = 3;
    int a[size][size] = {1};
    int b[size][size];

    for(int i=0; i<size;i++){
        for(int j=0; j<size;j++){
            cin >> b[i][j];
        }
    }

    // logic
    for(int i=0; i<size;i++){
        for(int j=0; j<size;j++){
            int temp = b[i][j] % 2;
            if(temp == 0)
            continue;
            else if (temp == 1){
              if(a[i][j] == 0){
                a[i][j] = 1;
              }  
            }
        }
    }
    return 0;
}