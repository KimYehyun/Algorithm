#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main(void) {

	int n, m;
	deque<int>dq;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		dq.push_front(a);
	}
	sort(dq.begin(), dq.end());
	int cnt = 0;
	while (dq.size() > 1) {
		if (dq.front() + dq.back() > m) {
			cnt++;
			dq.pop_front();
			dq.pop_back();
		}
		else
			dq.pop_front();
	}
	cout << cnt << "\n";

	return 0;
}