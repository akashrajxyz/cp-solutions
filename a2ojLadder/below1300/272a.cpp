#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n;
	cin >> n;
	int x,sum =0;
	for(int i=0;i < n ; i++ ){x;
		cin >> x;
		sum += x;
	}
	x =0;
	for(int i =1 ; i< 6 ; i++){
		if( (sum + i ) % (n+1) != 1 ){
			x++;
		}
	}
	cout << x << endl;
}
