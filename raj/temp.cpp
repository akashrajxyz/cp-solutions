#include<bits/stdc++.h>

using namespace std;

int main(){
  string temp ;
  getline(cin, temp);
  cout << temp ;
  if(temp.compare("x++") ^ temp.compare("++x"))
    cout << "yes" << endl ;
  else {
    cout << temp.compare("x++") ;
    cout << "no" << endl ;
  }

  return 0;
}
