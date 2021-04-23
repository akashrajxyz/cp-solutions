#include<bits/stdc++.h>

using namespace std;

int main(){
  string str;
  int low =0, up=0;
  cin >> str;
  for(auto it : str)
    if(it >= 65 && it <= 92){
      up++;
    }else{
      low++;
    }
  if(up > low)
    transform(str.begin(), str.end(), str.begin(), ::toupper);
  else
    transform(str.begin(), str.end(), str.begin(), ::tolower);
  cout << str << endl ;
  return 0;
}
