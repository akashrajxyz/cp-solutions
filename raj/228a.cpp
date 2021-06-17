#include<bits/stdc++.h>
using namespace std;
int main(){
  set<int> myset;
  long temp=0;
  for(int i=0; i<4 ; i++){
    cin >> temp;
    myset.insert(temp);
  }
  cout << 4-myset.size()<< endl;
  return 0;
}
