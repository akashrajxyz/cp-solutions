#include<bits/stdc++.h>

using namespace std;

int main(){
  int t, a, b, max = 0, min =0 ;
  cin >> t ;
  while(t--){
    cin >> a >> b ;
    max += b - a ;
    if(max > min)
      min = max ;
  }
  cout << min << endl ;
  return 0;
}
