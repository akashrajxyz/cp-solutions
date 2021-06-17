#include<bits/stdc++.h>

using namespace std;

int main(){
  string x;
  cin >> x;
  int len = x.length();
  for (int i=0; i<len; i++){
    if(x[i] == '9' && i==0){
      cout << x[i]; 
      continue;
    }
    cout << min(x[i] - '0', 57-x[i]);
  }
  cout << endl;
} 
