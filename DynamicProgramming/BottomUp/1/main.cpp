//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	ios_base::sync_with_stdio(false);
	int arr[501][501] = {0, }, n, i, j, a;
	
	cin >> n;
	cin >> arr[0][0];
	
	for(i=1; i<n; i++){
		for(j=0; j<=i; j++){
			cin >> a;
			if(j==0) arr[i][j] = arr[i-1][j] + a;
			else if(i==j) arr[i][j] = arr[i-1][j-1] + a;
			else {
				arr[i][j] = max(arr[i-1][j-1], arr[i-1][j]) + a;
			}
		}
	}
	
	int max_num = arr[n-1][0];
	
	for(i=1; i<n; i++){
		max_num = max(max_num, arr[n-1][i]);
	}

	cout << max_num << endl;


	return 0;
}