#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  n = min(n,m);
  ( n % 2 ) ? cout << "Akshat" : cout << "Malvika" ;
  cout << endl;
  return 0;
}
