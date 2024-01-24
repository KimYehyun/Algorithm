#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
vector < pair<int, int>>v;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b,c,d;
		cin >> a >> b;
		c = ((a / 100) * 60) + (a % 100);
		d = ((b / 100) * 60) + (b % 100);
		v.push_back({ c - 10,d + 10 });
	}
	v.push_back({ 1320,0 });
	sort(v.begin(), v.end());
	int start = 600, ans = 0;
	for (int i = 0; i < v.size(); i++) {
		ans = max(ans, v[i].first - start);
		start = max(start, v[i].second);
	}

	cout << ans << "\n";
	return 0;
}