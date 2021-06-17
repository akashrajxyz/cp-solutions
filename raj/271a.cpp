#include<bits/stdc++.h>
using namespace std;

int judge(int num){
  int t=4,a[10]={0};
  while(t--){
    a[num%10]++;
    if(a[num%10]>1)
      return 0;
    num/=10;
  }
  return 1;

}
int main(){
  int num;
  cin >> num;
  while(num++){
    if(judge(num)){
      cout << num << endl;
      return 0;
    }
  }
}
