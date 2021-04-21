#include<bits/stdc++.h>
#define lop(i, a, b, c) for(int i = a ; i < b ; i+=c)

using namespace std;

int main(){
  int n, m;
  cin >> n >> m ;
  lop(i, 1, 100, 1 ){
    n*=3;
    m*=2;
    if(m-n < 0 ){
      cout << i << endl;
      return 0;
    }

  }

  return 0;
}
