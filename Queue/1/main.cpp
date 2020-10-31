//#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	queue<int> q;
	int n, temp=0;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		q.push(i);
	}
	
	
	while(true){
		if(q.size()==1) break;
		q.pop();
		temp = q.front();
		q.pop();
		q.push(temp);
	}
	
	cout << q.front();
}