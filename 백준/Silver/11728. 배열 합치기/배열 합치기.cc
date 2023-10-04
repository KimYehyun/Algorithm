#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int>v;
	for (int i = 0; i < n + m; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());
	for (auto a : v) {
		cout << a << " ";
	}

	return 0;
}