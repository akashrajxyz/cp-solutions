#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int m, k, max = 0;
    cin >> m >> k;
    string stf, temp;
    cin >> stf;
    temp = stf ;
    if(stf.size() > 2){
      for( int i=0; i < stf.size() ; i++ ){
        if(max < stoi(stf.erase(i, 1)) %k )
          max = stoi(stf.erase(i, 1)) % k ;
        stf = temp ;
      }
      cout << max << endl ;

    }else{
      int mu = stoi(stf);
      if( ( mu % 10 ) % k >= ( mu / 10 ) % k  )
        cout <<   ( mu % 10 ) % k  << endl;
      else
        cout <<  ( mu / 10 )  % k << endl ;

    }
  }
  return 0;
}
