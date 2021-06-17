#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  int flag=1;
  cin >> str;
  for(int i =1 ; i < str.size() ; i++){
    if(str[i] >= 65 && str[i] <= 92)
      continue;
    flag=0;
    break;
  }
  if(flag){
    if(str[0]>=65 && str[0]<=92)
      cout << char( str[0]+32 );
    else
      cout << char(str[0]-32);
    for(int i=1; i< str.size();i++){
      cout << char(str[i] +32) ;
    }
    cout << endl;
    return 0;
  }
  cout << str << endl;

  return 0;
}
