#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin >> str;
  size_t index =0;
  while(index != -1){
    index = str.find("WUB");
    if(index != -1)
      str.replace(index, 3, " ");
  }

  cout << str;


  cout << endl;
  //remove extra space 
  return 0;
}
/*
 *
 *
 include<bits/stdc++.h>
     using namespace std;
     int main(){
      string s;
      cin>>s;
      regex p("WUB");
      cout<<regex_replace(s,p," ");
     }*
 */
