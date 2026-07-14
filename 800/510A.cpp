#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // allocation 
    int r, c; cin >> r >> c;
    char** a = new char*[r];
    for(int i=0; i<r;i++){
        a[i] = new char[c];
    }
    // pattern 
    int counter = 0;
    for(int i=0; i<r;i++){
        if(i % 2 == 0){
            for(int j=0; j<c;j++)
            a[i][j] = '#';
        }
        else{
            for(int j=0; j<c;j++)
                a[i][j] = '.';
           
                if(counter % 2 == 0)
                a[i][c-1] = '#';
                else
                a[i][0] = '#';

                counter++;
        }
    }

    // output
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << a[i][j];
        }
        cout << "\n";
    }

    // deletion of the memory
    for(int i=0; i<r;i++){
        delete[] a[i];
    }
    delete[] a;

    return 0;
}