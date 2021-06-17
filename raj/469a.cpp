#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, x, y;
  cin >> n >> x;
  int a[n]={0},xp[x]={0};
  for(int i=0; i< x ; i++)
    cin >> xp[i],a[xp[i]-1]=1;
  cin >> y;
  int yp[y]={0};
  for(int i=0; i< y ; i++)
    cin >> yp[i], a[yp[i]-1]=1;
  for(int i=0; i< n ; i++)
    if(a[i]==0){
      cout << "Oh, my keyboard!" << endl;
      return 0;
    }

    cout << "I become the guy." << endl;
  return 0;
}
