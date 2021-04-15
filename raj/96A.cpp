#include<bits/stdc++.h>

using namespace std;

int main(){
  string str;
  cin >> str;
  int worth, worth1;
  worth = (str.find("1111111") == -1) ? 0 : 1 ;
  worth1 = (str.find("0000000") == -1) ? 0 : 1 ;
  ( worth || worth1 ) ? cout << "YES" << endl : cout << "NO" ;
  return 0;
}
