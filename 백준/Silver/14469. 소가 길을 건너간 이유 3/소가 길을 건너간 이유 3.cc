#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	vector<pair<int,int>>v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	sort(v.begin(), v.end());

	int ans=v[0].first+v[0].second;
	for (int i = 1; i < n; i++) {
		if (ans <= v[i].first) {
			ans = v[i].first+v[i].second;
		}
		else {
			ans += v[i].second;
		}
	}
	cout << ans << "\n";

	return 0;
}