#include<bits/stdc++.h>

using namespace std;

// train(it=9, n=num)

int train(int num){
  if(num<=0)
    return 1;

  return train(num-10) + train(num-9); // train(84)+train(85)

}
// pair<int, int> ==> 
// 9 --> 1,0
//value-->8>35 <- key
//        /  \
//    -->4>25  26
//      / \
//   2>15 2>16 
//    /  \/  \
//  >5  >66   7  ==> 1+
//
// 09 ----> 35
//  
// 

int main(){
  int n, t;
  string x;
  cin >> x >> n;  // x=3, n=100
  for (auto it:x){
    t = n-(9-(it-'0')); //t=94 , it=9
    sum += train(t);  // train(n=94)
  }
}
