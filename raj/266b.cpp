#include<bits/stdc++.h>
using namespace std;

//122a.

int main(){
  int a, b, found;
  cin >> a >> b ;
  string str;
  cin >> str ;
  vector<size_t> vec ;
  for(int i = 0 ; i<  b ; i++){
    found = 0;
    for(int i = 0 ; i < a ; ){
       found = str.find("BG", i);
      if(found == -1)
        break;
      str.replace(found, 2, "GB");
      i=found + 2;
    }
  }
  cout<< str << endl;

  return 0;
}
