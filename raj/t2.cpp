#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
  set<int> myset;
  myset.insert(4);
  myset.insert(5);

  cout << *myset.begin() << endl;
  return 0;
}
