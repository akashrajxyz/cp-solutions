#include<bits/stdc++.h>

using namespace std;

int main(){
  int k,  w;
  long n ;
  cin >> k >> n >> w ;
  // n total ruppes
  // k first ruppes
  // w wants
  long summer ;
  summer = k *  w * (w+1) / 2 ;
  (summer > n ) ? cout << summer - n << endl : cout << 0 << endl ;

  return 0;
}
