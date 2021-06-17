#include<bits/stdc++.h>
using namespace std;
int main(){
  string str,ptr; cin >> str >> ptr;
  for(int i =0; i< str.size() ; i++){
    if(str[i]==ptr[i])
      cout<< "0" ;
    else
      cout<< "1" ;
  }
  cout << endl;
  
  return 0;
}
