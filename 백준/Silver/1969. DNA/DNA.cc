#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
bool cmp(pair<char, int>& a, pair<char, int>& b) {
	return a.second > b.second;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<string>v;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}

	string result="";
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		map<char, int>ma;
		for (int j = 0; j < n; j++) ma[v[j][i]]++;
		vector<pair<char, int>> v1(ma.begin(), ma.end());
		sort(v1.begin(), v1.end(), cmp);
		result += v1[0].first;
		cnt += (n - v1[0].second);
	}
	cout << result << "\n";
	cout << cnt << "\n";
	return 0;
}