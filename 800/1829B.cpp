#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        int size; cin >> size;
        int* a = new int[size];
        int temp = 0;
        int ans  = 0;
        for(int i=0; i<size;i++){
            cin >> a[i];
            if(a[i] == 0){
                temp++;
                if(temp > ans)
                ans = temp;
            }
            else {
                temp = 0;
            }
        }
        cout << ans << endl;
    delete[] a;
    }
    return 0;
}