#include<bits/stdc++.h>
using namespace std;


int main(){
  int temp=1;
  set<int> ing;
  for(int i=0;i<4;i++){
    cin >> temp;
    for(auto it : ing)
      if(temp%it==0){
        temp=0;
      }
      else if(it%temp==0){
        ing.erase(it);
        break;
      }
    if(temp){
      cout << "insert:" << endl;
      ing.insert(temp);
    }
  }
  for(auto it : ing)
    cout << it << " ";

  return 0;
}
