#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    // max and min and thier index
    int max = a[0];
    int min = a[0];
    for(int i=1; i<n;i++){
        if(a[i] > max)
        max = a[i];
        
        if(a[i] < min)
        min = a[i];
    
    }
    // index of min and max (first and last occurences of the numbers)
    int max_index = -1;
    int min_index = -1;
    for(int i=0; i<n;i++){
        if(a[i] == max && max_index == -1)
        max_index = i;
        if(a[i] == min)
        min_index = i;
    }
    // basic maths 
    if(max_index < min_index){
        int ans = max_index + ((n-1)-min_index);
        cout << ans << "\n";
    }
    else if(max_index > min_index){
       int ans = max_index + ((n-1) - (min_index+1));
       cout << ans << "\n"; 
    }   
    return 0;
}