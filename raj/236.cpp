#include<bits/stdc++.h>

using namespace std;

int main(){
  string str;
  cin >> str;
  set<char> setobj(str.begin(), str.end());
  ( setobj.size() % 2 ) ? cout << "IGNORE HIM!" << endl : cout << "CHAT WITH HER!" << endl ;
  return 0;
}
