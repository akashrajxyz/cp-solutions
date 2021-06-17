#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,h;
  int te,co=0;
  cin>>t>>h;
  while(t--){
    cin>>te,co++;
    if(te>h)
      co++;
  }
  cout << co << endl;
  return 0;

}
