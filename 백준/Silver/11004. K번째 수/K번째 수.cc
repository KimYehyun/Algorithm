#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k;
	vector<int>v;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cout << v[k - 1] << "\n";

	return 0;
}