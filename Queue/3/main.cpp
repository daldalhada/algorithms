//#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int t, i, n, m, j, a, idx, imp, cnt;
	cin >> t;
	for(i=0; i<t; i++){
		cnt=0;
		queue<pair<int, int> > q;
		priority_queue<int> pq;
		
		cin >> n >> m;
		for(j=0; j<n; j++){
			cin >> a;
			q.push({j, a});
			pq.push(a);
		}
		
		while(true){
			idx = q.front().first;
			imp = q.front().second;
			
			if(imp == pq.top()){
				cnt++;
				if(idx==m) break;
				q.pop();
				pq.pop();
			}
			else {
				q.push({idx, imp});
				q.pop();
			}
		}
		cout << cnt << endl;
	}

	return 0;
}