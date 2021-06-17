#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,k,num;
  cin >> t;
  int a[t]={0};
  k=t;
  while(t--)
    cin >>num,a[num-1]=k-t;
  for(auto i:a)
    cout << i << " ";
  cout << endl;
  return 0;
}
