#include<bits/stdc++.h>

using namespace std;

int main(){
  string ste;
  cin >> ste ;
  size_t a = count(ste.begin(), ste.end(), '1');
  size_t b = count(ste.begin(), ste.end(), '2');
  size_t c = count(ste.begin(), ste.end(), '3');

  ste = "";

  while(a--)
    ste += "1+" ;
  while(b--)
    ste += "2+" ;
  while(c--)
    ste += "3+" ;
  cout << ste.substr(0, ste.size()-1) << endl ;

  return 0;

}
