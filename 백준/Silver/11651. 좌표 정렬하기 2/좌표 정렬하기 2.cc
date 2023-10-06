#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	vector<pair<int, int>>v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}

	sort(v.begin(), v.end(), cmp);
	
	for (auto k : v)
		cout << k.first << " " << k.second << "\n";

	return 0;
}