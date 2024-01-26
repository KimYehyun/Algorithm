#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
vector<int>v;
stack<int>s;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k, t;
	cin >> n >> k >> t;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	long long cur = t;
	int i = 0;
	int cnt = 0;

	while(1) {
		if (cnt == k) break;
		if (!s.empty() && i == n && cnt < k) {
			cur += s.top();
			cnt++;
			s.pop();
			continue;
		}
		if (v[i] >= cur) {
			if (!s.empty()) {
				cur += s.top();
				s.pop();
				cnt++;
			}
			else {
				break;
			}
		}
		else if (v[i] < cur) {
			s.push(v[i]);
			i++;
		}
	}

	cout << cur;
	return 0;
}