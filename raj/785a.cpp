#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, sum =0 ;
  map<string , int > myp{
    {"Tetrahedron", 4},
    {"Cube", 6},
    {"Octahedron", 8},
    {"Dodecahedron", 12},
    {"Icosahedron", 20},
  };
  cin >> t;
  string st;
  while(t--){
    cin >> st;
    sum += myp[st];
  }
  cout << sum << endl;
  return 0;
}
