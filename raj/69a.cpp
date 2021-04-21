#include<bits/stdc++.h>
#define lop(i, a, b, c) for(int i=0; i<n ; i++ )

using namespace std;

int main(){
  int t;
  cin >> t ;
  array<int, 3> arr, brr = {0};

  while(t--){
    cin >> arr[0] >> arr[1] >> arr[2] ;
    brr[0] += arr[0] ;
    brr[1] += arr[1] ;
    brr[2] += arr[2] ;
  }
  if ( !brr[1] && !brr[0] && !brr[2]   ){
    cout << "YES" << endl;
    return 0;
  }
    cout << "NO" << endl;

  return 0;

}
