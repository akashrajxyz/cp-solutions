#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  int n, lf =0;
  while(t--){
    cin >> n;
    int x[n];

    for(int i = 0 ; i < n ; i++){
      cin >> x[i];
    }
    if(x[0]==x[1]){
      for(int i = 0 ; i < n ;i++){
        if(x[i]!=x[0]){
          cout << i+1 << endl;
        }
      }
    }else{
      (x[0]==x[2]) ? cout << 2 : cout << 1 ;
      cout << "\n" ;
    }
      
  }
  return 0;
}
