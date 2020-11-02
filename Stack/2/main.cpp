//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	stack<int> s;
	
	int k, a, i, sum=0;
	cin >> k;
	
	for(i=0; i<k; i++){
		cin >> a;
		if(a==0) s.pop();
		else s.push(a);
	}
	
	while(!s.empty()){
		sum+= s.top();
		s.pop();
	}
	
	cout << sum;
}