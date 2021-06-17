#include<bits/stdc++.h>
#define lop(i, a, b, c) for(int i = a ; i <= b ; i+=c)
using namespace std;
int main(){
  int num;
  cin >> num;
  int a[num];
  lop(i, 0, num -1 , 1)
    cin >> a[i] ;
  int b[4];
  lop(i, 1, 4, 1){
    b[i-1] = count(a, a+ num, i);
  }
  int taxi = b[3];
  cout << endl;
  if(b[2] >= b[0]){
    taxi += b[2]  + ceil(b[1]/ 2.0);
  }else{
    taxi += b[2];
    b[0] -= b[2];
    taxi += b[1] / 2 ; //inserting 2
    if(b[1]%2){
      taxi+= 1 ;
      b[0] -= 2;
    }
    if(b[0] > 0 ){
      taxi += ceil(b[0] / 4.0);

    }
  }
  cout << taxi << endl;

  return 0;
}
