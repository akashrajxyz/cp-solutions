#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin >> str;
  int found;
  for(int i =0 ; i < str.size();){
   found = str.find("BG", i);
   if(found == -1)
     break;
   str.replace(found, 2 , "GB");
   cout << str << i << endl;
   i = found + 2 ;
  }
  cout << str << endl ;
  return 0;
}
