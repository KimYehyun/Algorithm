#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	vector<pair<long long ,long long>>v;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		long long a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}

	sort(v.begin(), v.end());

	long long max_v = v[0].second;
	long long val = v[0].second;
	long long priceDiff = 0;
	int left = 0, right = 1;
	while (1) {
		priceDiff = v[right - 1].first - v[left].first;
		if (priceDiff < m) {
			max_v = max(max_v, val);
			if (right == n) break;
			val += v[right].second;
			right++;
		}
		else {
			val -= v[left].second;
			left++;
		}
	}
	
	cout << max_v;

	return 0;
}