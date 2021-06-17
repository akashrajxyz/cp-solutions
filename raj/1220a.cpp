#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  int min, x[5] = {0};
  //zreon
  for (int i=0; i<n; i++){
    switch (s[i]){
      case 'z':
        x[0]++;
        break;

      case 'r':
        x[1]++;
        break;

      case 'e':
        x[2]++;
        break;

      case 'o':
        x[3]++;
        break;

      case 'n':
        x[4]++;
        break;
    }
  }


  x[4] = *min_element(x+2, x+5);  
  x[3] -=  x[4];
  x[2] -=  x[4];
  x[3] = *min_element(x, x+4); 


  while(x[4]--){
    cout << '1' << " ";
  }

  while(x[3]--){
    cout << '0' << " ";
  }
  cout << endl;

  return 0;
}
