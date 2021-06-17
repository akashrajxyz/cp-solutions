#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,t;
  pair<int,int> min(101,0),max(0, 0);
  cin >> n;
  for(int i=0; i < n ; i++){
    cin >> t;
    if(min.first>=t){
      min.first=t;
      min.second=i;
    }
    if(max.first<t){
      max.first=t;
      max.second=i;
    }
  }
  t = max.second + (n-min.second-1);
  if(max.second > min.second)
    t--;
  cout <<  t << endl;


  return 0;
}
