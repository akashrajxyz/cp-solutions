#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin >> str ;
  array<char, 4> arr({'H', 'Q', '9'});
  int temp = 0;
  for(char it : arr){
    temp = str.find(it);
    if(temp>=0){
      cout << "YES" << endl ;
      return 0;
    }
  }
  cout << "NO" << endl;

  return 0;
}
