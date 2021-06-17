#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,i=0,a;
  double n;

  cin >> n;
  a =n;
  while(a--)
    cin >> t,i+=t;
  cout << (double)i/n << endl;
  return 0;
}
