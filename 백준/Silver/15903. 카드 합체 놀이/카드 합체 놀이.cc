#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main(void) {
	
	priority_queue<long long,vector<long long>, greater<long long>>pq;
	int n, m;
	long long k;
	long long sum = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> k;
		pq.push(k);
	}

	for (int i = 0; i < m; i++) {
		long long a = pq.top();
		pq.pop();
		long long b = pq.top();
		pq.pop();
		long long  key = a + b;
		pq.push(key);
		pq.push(key);
	}

	for (int i = 0; i < n; i++) {
		sum += pq.top();
		pq.pop();
	}

	cout << sum;

	return 0;
}