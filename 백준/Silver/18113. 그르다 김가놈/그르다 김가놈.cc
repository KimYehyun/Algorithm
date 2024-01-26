#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, k, m;
	cin >> n >> k >> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a <= k)continue;
		else if (a < 2 * k) {
			a -= k;
		}
		else {
			a -= k * 2;
		}
		if(a>0) v.push_back(a);
	}
	sort(v.begin(), v.end());

	if (v.size() == 0) {
		cout << -1 << "\n";
		return 0;
	}
	
	int left = 0; int right = v[v.size() - 1];
	int max_v = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (mid == 0) {
			left = mid + 1;
			continue;
		}
		int cnt = 0;
		for (int i = 0; i < v.size(); i++) {
			cnt += v[i] / mid;
		}
		if (cnt >= m) {
			max_v = max(max_v, mid);
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	if (max_v == 0)cout << -1 << "\n";
	else cout << max_v << "\n";

	return 0;
}