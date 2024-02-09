#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b) {
	return a.second < b.second;
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m, k;
	cin >> n >> m >> k;
	map<string, int>ma;
	for (int i = 0; i < n; i++) {
		string str;
		int a;
		cin >> str >> a;
		ma[str] = a;
	}
	long long min_v = 0, max_v = 0;
	for (int i = 0; i < k; i++) {
		string str;
		cin >> str;
		min_v += ma[str];
		max_v += ma[str];
		ma.erase(str);
	}

	vector<pair<string, int>>v(ma.begin(), ma.end());
	sort(v.begin(), v.end(), cmp);
	
	int j = v.size()-1;

	for (int i = 0; i < m - k; i++,j--) {
		min_v += v[i].second;
		max_v += v[j].second;
	}
	cout << min_v << " " << max_v;
	return 0;
}