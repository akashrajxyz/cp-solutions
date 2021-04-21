#include<bits/stdc++.h>
using namespace std;
int main(){
  string str("fighter of the queen");
  str.erase(remove(str.begin(), str.end(), ' '), str.end());
  cout << str;
}
