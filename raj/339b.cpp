#include<bits/stdc++.h>
using namespace std ;
int main(){
  int n,m;
  long long cum=0;
  cin >> n >> m;
  int a,b;
  a =1;
  for(int i = 1 ; i<=m ;i++){
    cin >> b ;
    if(b<a){
      cum +=n-a+b;
    }else{
      cum +=b -a;
    }
    a = b;
    
  }
  cout << cum << endl;
  return 0;
}
