#include<iostream>
#include<deque>
#include<cmath>
#include<algorithm>
using namespace std;

int n, k;
double sum = 0;
deque<int>dq;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;

	k = round(double(n) * 0.15);

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		dq.push_back(a);
	}

	sort(dq.begin(), dq.end());

	for (int i = 0; i < k; i++) {
		dq.pop_back();
		dq.pop_front();
	}

	if (dq.empty()) {
		cout << 0 << "\n";
		return 0;
	}
	int len = dq.size();
	for (int i = 0; i < len; i++) {
		if (dq.empty())
			break;
		sum += dq.front();
		dq.pop_front();
	}

	sum = round( sum / (double)len);

	cout << sum <<"\n";

	return 0;
}