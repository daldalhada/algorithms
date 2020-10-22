//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n, m, a[11], count = 0;

void dfs(int level, int sum){
	if(level == n+1){
		if(m == sum) count++;
	}
	else {
		dfs(level+1, sum+a[level]);
		dfs(level+1, sum-a[level]);
		dfs(level+1, sum);
	}
}
	
int main() {
	//freopen("input.txt", "rt", stdin);
	int i;
	cin >> n >> m;
	for(i=1; i<=n; i++){
		cin >> a[i];
	}
	
	dfs(1, 0);
	
	if(count!=0) cout << count;
	else cout << -1; 
			
	return 0;
}