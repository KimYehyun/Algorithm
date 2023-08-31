#include<iostream>
#include<deque>
#include<cmath>
using namespace std;

int n,a;
deque<pair<int, int>>dq;
int main(void) {

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		dq.push_back(make_pair(a, i));
	}

	int idx = dq[0].first;
	cout << dq[0].second << " ";
	dq.pop_front();
	while (!dq.empty()) {
		if (idx > 0) {
 			for (int i = 1; i < idx; i++) {
				pair<int, int>k = dq.front();
				dq.pop_front();
				dq.push_back(k);
			}
			cout << dq.front().second<<" ";
			idx = dq.front().first;
			dq.pop_front();
		}
		else {
			idx = abs(idx);
			for (int i = 1; i < idx; i++) {
				pair<int, int>k = dq.back();
				dq.pop_back();
				dq.push_front(k);
			}
			cout << dq.back().second << " ";
			idx = dq.back().first;
			dq.pop_back();
		}
	}

	return 0;
}