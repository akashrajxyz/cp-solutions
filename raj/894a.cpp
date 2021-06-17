#include<bits/stdc++.h>

using namespace std;

int main(){
  string x;
  int sum = 0;
  cin >> x;
  int len = x.length();
  for (int i=0; i<len; i++){
    if(x[i] == 'A'){
      sum += count(x.begin(), x.begin()+i, 'Q') * count(x.begin()+i, x.end(), 'Q'); 
    }
  }
  cout << sum << endl;
}
