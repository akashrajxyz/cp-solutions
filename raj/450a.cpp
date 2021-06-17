#include<bits/stdc++.h>
// submit this 
using namespace std;
int main(){
  int n,o,x=0,y =0;
  float m;
  cin >> n >> m;
  for(int i=0;i<n; i++){
    cin >> o;
    if(x<=ceil(o/m)){
      x = ceil(o/m);
      y = i;
    }
  }
  cout << y+1 << endl;
  return 0;
}
