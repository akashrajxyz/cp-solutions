#include<bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  double min=0;
  set<int> myset;
  pair<set<int>::iterator, bool> zero, last;
  cin >> a >> b ;
  int num;
  while(a--){
    cin >> num;
    myset.insert(num);
  }
  vector<double> vec(myset.begin(), myset.end());
  zero = myset.insert(0);
  last = myset.insert(b);
  for(int i = 1 ; i < vec.size() ; i++)
    if(min < vec.at(i) - vec.at(i-1))
      min = vec.at(i) - vec.at(i-1);
  min /=2;
  if(zero.second & last.second){
    min = max(vec.at(0), min);
    min = max(min, b -vec.back());
  }else if(zero.second){
    min = max(min,  vec.at(0));
  }else if (last.second){
    min = max(min, b - vec.back() );
  }
  cout << fixed <<  min << endl;
  
  return 0;
}

