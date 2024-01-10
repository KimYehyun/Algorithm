#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	int s = v[0];
	int cnt = 0;
	for (int i = 1; i < n; i++) {
		if (m <= v[i] - s) {
			cnt++;
			s = v[i];
		}
	}

	cout << cnt+1 << "\n";

	return 0;
}