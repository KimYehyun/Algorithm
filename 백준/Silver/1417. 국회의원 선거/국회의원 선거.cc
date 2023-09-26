#include<iostream>
#include<queue>
using namespace std;
int main(void) {

	int n,ds, a;
	priority_queue<int>pq;

	cin >> n;

	if (n == 1) {
		cout << 0;
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (i == 0)
			ds = a;
		else 
			pq.push(a);
	}

	int cnt = 0;

	while (1) {
		if (ds > pq.top())
			break;
		int key = pq.top();
		pq.pop();
		pq.push(key - 1);
		ds += 1;
		cnt++;			
	}

	cout << cnt;

	return 0;
}