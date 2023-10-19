#include<iostream>
#include<queue>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	queue<int>q;
	int n, m;
	cin >> n >> m;
	cout << "<";
	for (int i = 1; i <= n; i++) q.push(i);
	while (q.size() > 1) {
		for (int i = 0; i < m-1; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() <<", ";
		q.pop();
	}
	cout << q.front() <<">";

	return 0;
 }