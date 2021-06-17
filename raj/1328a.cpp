#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  int num;
  vector<int> vec;
  cin >> t;
  while(t--){
    cin >> num ;
    vec.push_back(num%2);
  }
  if(count(vec.begin(), vec.end(), 1) >count(vec.begin(), vec.end(), 0)  )
    cout <<find(vec.begin(), vec.end(),  0)  - vec.begin() + 1<< endl ;
  else
    cout <<find(vec.begin(), vec.end(),  1)  - vec.begin() + 1 << endl;
  return 0;
}
