#include<bits/stdc++.h>

using namespace std;

int main(){
  string seer, deer;
  cin >> seer ;
  cin >> deer ;
  int temp,flag = 0;
  for(int i = 0 ; i < seer.size() ; i++){
    if(65 <= seer[i] && seer[i] <= 92 ){
      seer[i] = seer[i] + 32 ;
    }
    if(65 <= deer[i] && deer[i] <= 92 ){
      deer[i] = deer[i] + 32 ;
    }
    temp = seer[i] - deer[i];
    if(temp){
      (temp < 0) ? flag = -1 : flag = 1 ;
      break;
    }

  }
  cout << flag << endl ;
  return 0;
}
