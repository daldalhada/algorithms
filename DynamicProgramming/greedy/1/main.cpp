//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, arr[1001], temp = 0, sum = 0;
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr+n);
	
	for(int i=0; i<n; i++) {
		sum += arr[i];
		temp += sum;
	}
	
	cout << temp;
}