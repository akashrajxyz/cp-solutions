#include<bits/stdc++.h>
using namespace std; //34A
int main(){
	int n,a,b,c=0,i,j,min;
	cin>>n>>a>>b;
	min = abs(a-b);
	j = 1;
	for(i = 2 ; i< n ; i++){
		cin >> c;
		(min > abs(b-c) ) ? min = abs(b-c),j = i : 0 ;
		b = c;
	}
	if( c && min > abs(c-a)){
		cout << n<< " 1" << endl;
		return 0;
	}
	printf("%d %d\n", j,j+1);

		
}
	

