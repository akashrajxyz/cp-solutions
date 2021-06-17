#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int i = 0;
ll to = 1e9+7;
ll dp[300000] = {0};

ll train(ll num){
  if(num<=0)
    return 1;

  if(dp[num] != 0){
    return dp[num];
  }

  return dp[num] = (train(num-10)+train(num-9)) % to;
}

int main(){
  int t;
  cin >> t ;
  while(t--){
    string x;
    ll n,sum=0;
    cin >> x >> n; 
    sort(x.begin(), x.end());  
    for(auto it:x) 
      sum=(sum + train(n-57+it))%to;
    printf("%d\n", sum);
  }
  return 0;
}
