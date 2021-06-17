#include<bits/stdc++.h>
using namespace std;

int main(){
  long long n,k;
  cin >> n >> k ;
  n = ceil(n/2.0);
  ( n >= k ) ? cout << k*2-1 << endl : cout << (k - n) * 2 << endl;
  return 0;
}
