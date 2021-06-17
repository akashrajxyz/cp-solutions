#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,p,q,count=0;
  cin >> n;
  while(n--){
    cin >> p >> q;
    if(p <= q-2)
      count++;
  }
  cout << count << endl;
  return 0;
}
