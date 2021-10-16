#include<bits/stdc++.h>
using namespace std; //34A
int n,i,a[100];
int main(){
	int c,b,d;
	for(cin>>n;cin>>a[i++];);
	int min=abs(a[0]-a[n-1]);b=1;d=n;
	for(int i=0;i<=n-2;i++){c=abs(a[i+1]-a[i]);if (min>c){min=c;b=i+1;d=i+2;}}
	cout<<b<<" "<<d;}
		
	

