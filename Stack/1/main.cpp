//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	
	int n, k;
	char a[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
	cin >> n >> k;
	stack<int> s;
	
	while(n>k-1){
		s.push(n%k);
		n = n/k;
 		if(n<k) {
 			s.push(n);	
		}
	}
	
	
	while(!s.empty()){
		if(k==16) {
			if(s.top()>=10) {
				cout << a[s.top()-10];
				s.pop();
			}
			cout << s.top();
			s.pop();	
		}
		else {
			cout << s.top();
			s.pop();	
		}	
	}
	
	return 0;
}