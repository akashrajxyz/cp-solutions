#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,flag = 0;
  cin >> t ;
  while(t--){
    cin >> n ;
    for(int i = 2 ; i <= ceil(n/2) ; i++){
      if(n%i==0){
        flag++;
        if(flag == 2){
          break;
        }
      }
    }
    if(flag!=1){
      cout << "NO" << endl;
    }else{
      cout << "YES" << endl;
    }
    flag = 0;
  }
  return 0;
}
