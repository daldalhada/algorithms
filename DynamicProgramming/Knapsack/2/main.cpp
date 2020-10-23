//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	ios_base::sync_with_stdio(false);
	
	int n, c[13]={0, }, arr[501], i, j, m;
	
	for(i=0; i<501; i++){
		arr[i] = 500;
	}
	
	cin >> n;
	for(i=0; i<n; i++){
		cin >> c[i];
	}
	
	cin >> m;
	
	arr[0] = 0;
	for(i=0; i<n; i++){
		for(j=c[i]; j<=m; j++){
			arr[j] = min(arr[j], arr[j-c[i]]+1);
		}
	}
	
	cout << arr[m];
	

	return 0;
}