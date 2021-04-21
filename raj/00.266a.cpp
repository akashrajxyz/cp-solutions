#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n ;
  string str;
  cin >> str ;
  if(str == "RRG"){
    cout << 1 << endl;
    return 0;
  }
  array<int, 3> arr = {0};
  for(auto it: str) {
    if( it == 'R' )  arr[0]++ ;
    if( it == 'G' )  arr[1]++ ;
    if( it == 'B' )  arr[2]++ ;
  }
  sort(arr.begin(), arr.end(),  less<int>());
  if(!arr[0]){
    if(!arr[1]){
      cout << n -1 << endl;
      return 0;
    }
    if( arr[2] > arr[1] ){
      cout << n - 2 * arr[1] - 1 << endl;
    }else{
      cout << n - 2 * arr[1]  << endl;
    }
    return 0;
  }
  arr[1] -= arr[0] ;
  arr[2] -= arr[0] ;
  if(arr[2]> arr[1])
    cout << n -  3 * arr[0] - 2 * arr[1] - 1 << endl;
  else {
    cout << n -  3 * arr[0] - 2 * arr[1] << endl;
  }


  return 0;
  

}
