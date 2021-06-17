#include<bits/stdc++.h>
using namespace std;
int main(){
  int n ;
  string st;
  string::iterator i1,i2 ;
  int q, p, count = 0;
  cin >> n ;
  
  while(n--){
     cin >> st;
     count = 0;
     q = st.find("1");
     p = st.rfind("1");
     if( st.length() < 3 || q == -1  ){
       cout << 0 << endl;
       continue;
     }
     for (int i=q; i<p; i++){
       if(st[i] == '0'){
                 count++;
       }
     }
     cout << count << endl;
  }
  return 0;
}
