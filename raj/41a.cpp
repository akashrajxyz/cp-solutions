#include<bits/stdc++.h>
using namespace std;
int main(){
  string str,ptr;
  cin >> str >> ptr;
  size_t i,t = str.size();
  i = t;

  while(t--){
    if( str[t]!=ptr[i-t-1] ){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  
  return 0;
}
