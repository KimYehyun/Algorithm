#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int n;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
priority_queue<int, vector<int>, greater<int>>result;
int main(void) {

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		pq.push({ a,b });
	}
	result.push(pq.top().second);
	pq.pop();
	while (!pq.empty()) {
		if (result.top()<=pq.top().first) {
			result.push(pq.top().second);
			result.pop();
		}
		else {
			result.push(pq.top().second);
		}
		pq.pop();
	}
	cout << result.size();

	return 0;
}