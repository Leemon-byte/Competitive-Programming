#include<bits/stdc++.h>
using namespace std;
int main(){
  int tt; cin >> tt;
  int x = 0, y = 0, z = 0;
  while(tt--){
    int a, b, c;
    cin >> a >> b >> c;
    x += a;
    y += b; 
    z += c;
  }
  if(x != 0 || y != 0 || z != 0)
  cout << "NO";
  else 
  cout << "YES";
}