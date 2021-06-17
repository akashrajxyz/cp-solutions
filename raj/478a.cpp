#include<bits/stdc++.h>

using namespace std;

int main(){
  int a[5];
  cin >> a[0] >> a[1] >>  a[2] >> a[3] >> a[4] ;
  a[0] = accumulate(a,a+5, 0);
  if(a[0]==0){
    cout << "-1" << endl;
    return 0;
  }
  if(a[0]% 5){
    cout << "-1" << endl;
    return 0;
  }
  cout << a[0]/5 << endl;
  return 0;
}
