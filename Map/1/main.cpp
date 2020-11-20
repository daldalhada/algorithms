//#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	map<string, int> m;
	map<string, int>::iterator iter;
	int n, max_value=0;
	string s; 
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> s;
		m[s]++;
	}
	
	for(iter = m.begin(); iter != m.end(); iter++){
		max_value = max(max_value, (*iter).second);
	}
	
	cout << max_value << endl;

}