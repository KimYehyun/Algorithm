#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;
		int idx = lower_bound(v.begin(), v.end(), b) - v.begin();
		if (v[idx] == b && idx != n) {
			cout << idx << "\n";
		}
		else {
			cout << "-1"<<"\n";
		}
	}
	return 0;
}