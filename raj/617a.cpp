#include<bits/stdc++.h>

using namespace std;

int main(){
  int num;
  int rem;
  cin >> num;
  if(num / 10  == 0){
    if(num / 5  == 0 ) {
      cout << 1 << endl ;
    }else{
      if(num == 5){
        cout << 1 << endl;
        return 0;
      }
      cout << 2 << endl ;
    }
  }else{
    if(num==10){
      cout << 2 << endl ; return 0 ;

    }
    rem  = num % 5 ;
    num = num / 5 ;
    if(!rem){
      cout << num << endl;
      return 0;
    }
      cout << num + 1 << endl;
  }

  return 0;
}
