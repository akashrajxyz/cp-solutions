#include <bits/stdc++.h>

using namespace std;

int main(){
  unsigned long long n, m, k;
  unsigned long long a,b;
  cin >> n >> m >> k ;
  a = (n % k) ? n/k+1 : n/k ;
  b = (m % k) ? m/k+1 : m/k ;
  cout << a * b << endl;
  return 0;
}
