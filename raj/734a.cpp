#include<bits/stdc++.h>
using namespace std;
int main(){
  int num,counta=0,countb=0;
  cin >> num;
  string str;
  cin >> str;
  while(num--){
    if( str[num]=='A' )
      counta++;
    else
      countb++;
  }
  if(counta>countb)
    cout << "Anton" << endl;
  else if(countb>counta)
    cout << "Danik" << endl;
  else
    cout << "Friendship" << endl;
  
  return 0;
}
