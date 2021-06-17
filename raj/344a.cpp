#include<bits/stdc++.h>
using namespace std;
int main(){
  int m,n,p=0, flag=0, count =0;


  cin >> m;
  while(m--){
    cin >> n;
    if(p == n){
      flag++;
    }else{
      if(flag)
        count++;
      flag = 0;
    }
    p = n;
  }
  if(flag)
    count++;
  cout << count << endl;
  return 0;
}
