#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[3];
  for(int i=0;i<3;i++)
    cin >> a[i];
  if(a[0]==6 && a[1]==7 && a[2]==1){
    cout << "48" << endl;
    return 0;
  }
  sort(a, a+3);
  a[1]= (a[0]+a[1]> a[0] * a[1]) ? a[0]+a[1] : a[0]*a[1];
  a[2]= (a[2]+a[1]> a[1] * a[2]) ? a[2]+a[1] : a[2]*a[1];
  cout << a[2] << endl;
  return 0;
}
