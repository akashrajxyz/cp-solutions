#include<bits/stdc++.h>
using namespace std; //224A
int main(){
	int i,a[3];
	long long int n =1;
	for(i=3;i--;n*=a[i])cin>>a[i];
	n=sqrt(n);
	a[2] = n/a[2];
	for(i=2;i--;)a[2]+=n/a[i];
	cout << 4 * a[2] << endl;
}
	

