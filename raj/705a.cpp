#include<bits/stdc++.h>
using namespace std;
int main(){
  int num;
  cin >> num;
  for(int i=0;  i < num ;cout<< " that "){
    if(i%2){
      cout << "I love" ;
    }else{
      cout << "I hate";
    }
    if(i+1== num)
      break;
    i++;
  }
  cout << " it" << endl;
  return 0;
}

