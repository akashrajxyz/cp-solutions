#include<bits/stdc++.h>
using namespace std;
int main(){
  long n,a,b,max =0 ,count=0;
  cin >> n;
  n--;
  cin >> a;
  count++;
  max++;

  while(n--){
    cin >> b ;
    if(b>=a){
      a =b;
      count++;

    }else{
      if(count>max)
        max = count ;
      a =b;
      count = 1;
    }

  }
  (max > count ) ? cout << max << endl : cout << count << endl;


  return 0;
}
