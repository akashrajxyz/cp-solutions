#include<bits/stdc++.h>
using namespace std;

int main(){
  int flag = 0 ;
  string str, ptr("hello");
  string::iterator ing = ptr.begin();
  cin >> str ;
  for(int i=0; i < str.size() ; i++){
    if(str[i]== *ing){
      ing = next(ing);
    }

  }
  if(ing == ptr.end())
    cout << "YES" << endl;
  else {
    cout << "NO" << endl;
  }
  return 0;

}
