#include<iostream>
#include<stack>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	stack<int>s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s.push(a);
	}

	int cnt = 0;
	int max = 0;
	while (!s.empty()) {
		if (s.top() > max) {
			cnt++;
			max = s.top();
		}
		s.pop();
	}
	cout << cnt << "\n";
	return 0;
}