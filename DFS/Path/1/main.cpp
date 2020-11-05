//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int arr[101][101] = {0, }, check[101] = {0,};
int n, m, cnt=0;

void dfs(int v){
	check[v] = 1;
	
	for(int i=1; i<=n; i++){
		if(arr[v][i]==1 && check[i]==0){
			cnt++;
			dfs(i);
		}
	}
}

int main() {
	//freopen("input.txt", "rt", stdin);
	int a, b;
	cin >> n >> m;
	
	for(int i=0; i<m; i++){
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;	
	}
	
	dfs(1);
	
	cout << cnt;
}