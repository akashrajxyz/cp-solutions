#include<bits/stdc++.h>

using namespace std;

int Remainder(string str, int R)
{
    // len is variable to store the
    // length of Number string.
    int len = str.length();
    int Num, Rem = 0;
    // loop that find Remainder
    for (int i = 0; i < len; i++) {
        Num = Rem * 10 + (str[i] - '0');
        Rem = Num % R;
    }
    // Return the remainder
    return Rem;
}
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
        if(max < Remainder(stf.erase(i, 1), k ))
          max = Remainder(stf.erase(i, 1), k );
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
