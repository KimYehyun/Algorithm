#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int n, m;
vector<int>v;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	v.push_back(0);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	for (int i = 1; i <= n; i++) {
		v[i] = v[i] + v[i-1];
	}

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		cout << v[b] - v[a - 1]<<"\n";
	}

	return 0;
}