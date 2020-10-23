//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	ios_base::sync_with_stdio(false);
	
	int n, arr[21][21], i, j, a;
	
	cin >> n; 
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cin >> a;
			if(i==0 && j==0) arr[i][j] = a;
			else if(i==0 && j!=0) arr[i][j] = arr[i][j-1] + a;
			else if(i!=0 && j==0) arr[i][j] = arr[i-1][j] + a;
			else arr[i][j] = min(arr[i-1][j], arr[i][j-1]) + a;
		}
	}
	
	cout << arr[n-1][n-1] << endl;
	

	return 0;
}