#include<bits/stdc++.h>
using namespace std;

int t;
int x[200], y[200];

bool sc(int x, int y);
int main(){
	int c = 0;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> x[i] >> y[i];
	}	
	for (int i=0; i<t; i++){
		if(sc(x[i], y[i])){
			c++;
		}
	}
	cout << c << endl;
}

bool sc(int x1, int y1){
	int ans[4] = {0};
	for (int i=0; i<t; i++){
		if ( x1 == x[i] && y1 == y[i] )
			continue;
		if(x1 > x[i] && y1 == y[i])  // right
			ans[0]++;
		if(x1 < x[i] && y1 == y[i])  // left 
			ans[1]++;
		if(x1 == x[i] && y1 < y[i])  // lower
			ans[2]++;
		if(x1 == x[i] && y1 > y[i])  // upper
			ans[3]++;
	}
	for ( int i =0; i<4; i++){
		if(!ans[i])
			return 0;
	}
	return 1;
}

