#include<bits/stdc++.h>
using namespace std;
int main(){
  int s, t;
  cin >> s >> t ;
  vector<pair<int,int>> pr;
  while(t--){
    int x, y;
    cin >> x >> y;
    pr.push_back(make_pair(y,x));
  }
  sort(pr.begin(), pr.end(), greater<pair<int,int>>());
  for(auto it:pr)
    cout << it.first << it. second << endl;
  return 0;
}


/*
 * 10 5
 * 50 25 
 * 23 87
 * 90 
 */
