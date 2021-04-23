#include<bits/stdc++.h>

using namespace std;

vector<int> vec = {4,7,47,74,477, 474, 444, 447, 747,774, 777, 744 };

int main(){
  int num ;
  cin >> num ;
  for(auto it : vec){
    if(!(num % it)){
      cout << "YES" << endl;
      return 0;
    }

  }
  cout << "NO" << endl;

  return 0;
}
