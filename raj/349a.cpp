//349a
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,c,a[5] = {0};
  cin >> n;
  while(n--){
    cin >> c;
    c /= 25;
    a[c]++;
    if( c == 2 ){
      a[1]--;
      if(a[1]<0){
        cout << "NO" << endl;
        return 0;
      }
    }
    if(c==4){
      if(a[2]){
        a[2]--;a[1]--;

        if(a[1]<0){
          cout << "NO" << endl;
          return 0;
        }
      }else{
        a[1]-=3;
        if(a[1]<0){
          cout << "NO" << endl;
          return 0;
        }

      }
    }
  }
  cout << "YES" << endl;
  return 0;
}
