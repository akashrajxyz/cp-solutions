#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, k;
  cin >> n >> k ;
  int arr[n];
  for(int i = 0 ; i < n ; i++ )
    cin >> arr[i] ;
  k = arr[k-1];
  sort(arr, arr + n);
  if(!k)
    for(int i =0 ; i< n ; i++)
      if(arr[i] > 0 ){
        k = arr[i] ;
        break;
      }
  if(k){
    for(int i = 0 ; i < n ; i++)
     if(k == arr[i] ){
       k = i ;
       break ;
     }
    cout << n- k  << endl;
    return 0;
  }
  cout << 0 << endl;
  return 0;
}
