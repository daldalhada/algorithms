//#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	queue<int> q;
	vector<int> v;
	int n, k, i;
	
	cin >> n >> k;
	
	for(i=1; i<=n; i++){
		q.push(i);
	}
	
	while(true){
		if(q.size()==1) {
			v.push_back(q.front());
			break;	
		}
		for(i=1; i<k; i++){
			q.push(q.front());
			q.pop();
		}
		v.push_back(q.front());
		q.pop();
	}
	
	cout << "<";
	for(i=0; i<v.size()-1; i++){
		cout << v[i] << ", ";
	}
	cout << v[v.size()-1] << ">";
	return 0;
}