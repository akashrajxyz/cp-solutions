#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,i=7,temp;
 vector<string> week({"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"});
 cin >> n ;
 vector<int> vec;
 while(i--){
   cin >> temp;
   vec.push_back(temp);
 }
 i = accumulate(vec.begin(), vec.end(), 0);
 n %= i;
 if(n == 0 ){
   for(vector<int>::reverse_iterator it= vec.rbegin() ; it != vec.rend() ; it++)
     if(*it){
       i = vec.rend() - it;
       cout << i << endl;
       return 0;
     }
 }
 temp = 0;
 for(int demp: vec){
   n-=demp;
   if(n<=0)
     break;
   temp++;
 }

 cout << temp+1 << endl;



 return 0;
}
