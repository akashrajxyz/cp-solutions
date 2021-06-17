#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin, s);
  set<char> myset(s.begin() , s.end());
  myset.erase('{');
  myset.erase('}');
  if(myset.size()<=1){
    cout << myset.size() << endl;
    return 0;
  }
  cout << myset.size()-2 << endl;
  return 0;
}
