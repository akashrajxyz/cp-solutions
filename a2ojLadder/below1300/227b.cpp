#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n, m;
	long long int pet=0,vas=0;
	cin >> n;
	int temp,brr[n+1];
	for(int i = 1 ; i < n+1  ; i ++ ){
		cin >> temp;
		brr[temp]  = i ;
	}
	cin >> m ;
	for(int i = 1 ; i < m+1  ; i ++ ){
		cin >> temp ;
		vas += brr[temp];
		pet += n - brr[temp] + 1;
	}
	cout << vas << ' ' << pet << endl;
}
