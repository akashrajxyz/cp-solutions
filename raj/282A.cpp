#include<bits/stdc++.h>

//  https://codeforces.com/problemset/problem/282/A

using namespace std;

int main(){
  int num, temp =0;
  string x;
  cin >> num ;
  for(int i = 0; i <= num ; i++){
    cin >> x ;
    if(x == "++X" || x == "X++"){
      temp++;
      
    }
    else{
      temp--;
    }
  }
  cout << temp << endl ;

  return 0;
}
