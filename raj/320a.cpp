#include<bits/stdc++.h>

using namespace std;

int main(){
  string x;
  cin >> x;
  int len = x.size();
  for(int i=0; i<len-2; i++){
    if(x[i] == '1' && x[i+1] == '4' && x[i+2] == '4'){
      x[i] = '#';
      x[i+1] = '#';
      x[i+2] = '#';
    }
  }

  for(int i=0; i<len-1; i++){
    if(x[i] == '1' && x[i+1] == '4') {
      x[i] = '#';
      x[i+1] = '#';
    }
  }

  for(int i=0; i<len; i++){
    if(x[i] != '1' && x[i] != '#'){
        cout << "NO"  << endl;
        return 0;
    }
  }
  cout << "YES" << endl;
}
