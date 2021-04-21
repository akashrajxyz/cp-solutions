#include <bits/stdc++.h>
#define lop(i,a,b,c) for (int i=a;i<b;i+=c)

using namespace std;

int main(){
  int temp,row, col;
  lop(i, 0, 5, 1)
    for(int j = 0 ; j < 5 ; j++ ){
      cin >> temp;
      if(temp) {
        row = i; col= j;
        break;
      }
    }
  cout <<  abs(row-2) + abs(col-2) << endl ;
  return 0;
}
