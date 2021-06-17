#include<bits/stdc++.h>


using namespace std;

int main(){
  int t;
  string x;
  cin >> t;
  map<string,int> m;
  while(t--){
    cin >> x;
    if (m.find(x) != m.end()){
      m.at(x) += 1; 
      cout << x << m.at(x) << endl;
    }else{
      m.insert(pair<string, int> (x, 0));
      cout << "OK" << endl;
    }
  }
}
