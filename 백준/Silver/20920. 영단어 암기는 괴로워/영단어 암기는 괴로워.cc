#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b) {
	if (a.second == b.second) {
		if (a.first.size() == b.first.size()) {
			return a.first < b.first;
		}
		return a.first.size() > b.first.size();
	}
	return a.second > b.second;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	map<string, int>ma;
	string str;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str.size() < m) continue;
		ma[str]++;
	}
	vector<pair<string, int>>v(ma.begin(), ma.end());

	sort(v.begin(), v.end(), cmp);

	for (auto a : v) {
		cout << a.first << "\n";
	}
	
	return 0;
}