#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int arr[100001];
deque<int>dq;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		dq.push_back(arr[i]);
	}
	int ans = 0;
	bool a = 0;
	int top = 0;
	while (!dq.empty()) {
		if (a == 0) {
			top = dq.back();
			ans += top;
			dq.pop_back();
			a = 1;
		}
		else if (a == 1) {
			ans += top;
			dq.pop_front();
			a = 0;
		}
	}
	cout << ans;
	return 0;
}