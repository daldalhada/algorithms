//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	
	int n, i, j;
	char a[51];
	bool flag;
	cin >> n;
	
	for(i=0; i<n; i++){
		stack<char> s;
		flag = true;
		cin >> a;
		for(j=0; a[j]!='\0'; j++){
			if(a[j]=='(') s.push(a[j]);
			else {
				if(s.empty()) flag = false;
				else s.pop();
			}
		}
		
		if(s.empty() && flag==true) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}