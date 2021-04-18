#include<bits/stdc++.h>

using namespace std;

int main(){
  string s("skfskfsafafsafa");
  string temp = "";
  for(int i = 0 ; i < s.size() ; i++){
    cin.ignore();
    temp = string(".") + string(1, s[i] ) ;
    s.replace(i, 1 , temp);
  }
  cout << temp << endl ;

  return 0;
}
