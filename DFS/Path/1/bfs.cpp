//#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int arr[101][101]={0, }, check[101]={0, };
int n, m, temp=0, cnt=0;

void bfs(int v){
	while(!q.empty()){
		temp = q.front();
		q.pop();
		for(int i=1; i<=n; i++){
			if(arr[temp][i]==1 && check[i]==0){
				check[i] = 1;
				q.push(i);
				cnt++;
			}
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
	
	check[1] = 1;
	q.push(1);
	bfs(1);
	
	cout << cnt;
}