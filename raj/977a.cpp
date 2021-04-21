#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  int temp ;
  cin >> n;
  cin >> m;
  while(1){
    if(!m)
      break;
    temp = n % 10;
    if(!temp){
      n /= 10 ;
      m--;
      continue;
    }

    if(temp <= m){
      m -= temp;
      n -= temp;
      continue;
    }else{
      cout << n - m << endl ;
      return 0;
    }
  }
  cout << n << endl;
  return 0;
}
