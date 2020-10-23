//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	ios_base::sync_with_stdio(false);
	
	int n, m, i, j, a, b, arr[1000] = {0, };
	cin >> n >> m;
	
	for(i=0; i<n; i++){
		cin >> a >> b;           // a: 보석 무게, b: 가치 
		for(j=a; j<=m; j++){ 
			arr[j] = max(arr[j-a] + b, arr[j]);
		}
	}
	
	cout << arr[m];

	return 0;
}