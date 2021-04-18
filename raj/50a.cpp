#include<bits/stdc++.h>

using namespace std;

int main(){
  string temp,cemp = ".";
  string aei = "aeiouAEIOUYy";
  cin >> temp ;
  for(char c: aei)
    temp.erase(remove(temp.begin(), temp.end(), c), temp.end());
  for(int i = 0 ; i < temp.size() ; i++){
    if(temp[i] >= 65 &&  temp[i] <= 92)
      temp[i] += 32;
    cout <<  "." << temp[i]  ;
  }
  cout <<  endl;



  return 0;
}
