#include<bits/stdc++.h>

using namespace std;


int main(){
  int t;
  cin >> t;
  while(t--){
    int x, y, d ,temp;
    cin >> x >> y >> d;
    if(x > y) {
      temp = x/y; // y%x
      if(d > temp) {
        cout << "NO" << endl;
      }else{
        cout << "YES" << endl;
      }
    }else{
      temp = y%x;
      if(d > temp){
        cout << "NO" << endl;
      }else{
        cout << "YES" << endl;
      }
    }
  }
}
