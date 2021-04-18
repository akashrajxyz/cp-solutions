#include<bits/stdc++.h>

using namespace std;

int main(){
  int t, flag = 0 ;
  cin >> t;
  cin.ignore();
  string temp;
  while(t--){
    getline(cin, temp);
   if(count(temp.begin(), temp.end(), '1') > 1 )
     flag++ ;
  }
  cout << flag << endl ;
  return 0;
}
