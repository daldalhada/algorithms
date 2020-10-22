//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n, check[11];

void dfs(int level){
	if(level==n+1){
		for(int i=1; i<=n; i++){
			if(check[i]==1) cout << i << " ";
		}
		cout << endl;
	}
	else {
		check[level] = 1;
		dfs(level+1);
		check[level] = 0;
		dfs(level+1);
	}
}

int main() {
	//freopen("input.txt", "rt", stdin);
	cin >> n;
	
	dfs(1);
	return 0;
}