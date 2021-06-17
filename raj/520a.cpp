#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,l;
  int flag[26] = {0};
  string st;
  cin >> n;
  cin >> st;
  l = st.length();
  for(int i =0,index ; i < l ; i++){
    index = ( st[i] > 93) ? st[i] - 97 : st[i] - 65 ;
    flag[index] = 1;
  }
  for(int i =0 ; i < 26 ; i++ )
    if(!flag[i]){
      cout << "NO" << endl;
      return 0;
    }
 cout << "YES" << endl; 

  
  return 0;
}
