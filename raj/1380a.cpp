#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n;
  cin >> t;
  int max = 0, pos = 0;
  while(t--){
    cin >> n ;
    int a[n];
    for(int i  = 0 ; i < n ; i++){
      cin >> a[i] ;
      if(a[i] > max){
        pos = i;
      }
    }
    cout << pos << endl;
    
    pos =0;
    max =0;

  }
}
