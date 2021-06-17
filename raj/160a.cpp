#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, sum=0;
  cin >> n;
  int arr[n];
  for(int i=0;i<n; i++)
    cin >> arr[i],sum+=arr[i];
  sort(arr, arr+n);
  sum = sum/2 +1 ;
  int sumb = 0;
  for(int i = n-1 ; i >= 0 ; i--){
    sumb+=arr[i];
    if(sumb>=sum){
      cout << n - i << endl;
      break;
    }

  }




  return 0;
}
