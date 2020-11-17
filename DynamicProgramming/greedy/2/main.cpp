//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, k, a, cnt=0, idx;
	vector<int> coin;
	cin >> n >> k;
	
	for(int i=0; i<n; i++){
		cin >> a;
		coin.push_back(a);
	}
	
	idx = coin.size()-1;
	while(k>0){
		if(k<coin[idx]) idx--;
		else {
			k-= coin[idx];
			cnt++;
		}
	}
	cout << cnt;
}