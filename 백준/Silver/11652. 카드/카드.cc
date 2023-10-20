#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<long long,long long> &a, pair<long long, long long>&b) {
	if (a.second == b.second) 
		return a.first < b.first;
	return a.second > b.second;
}
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	map<long long,long long>m;
	vector<pair<long long,long long>>v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		long long a;
		cin >> a;
		m[a]++;
	}

	for (auto a : m) {
		v.push_back({ a.first, a.second });
	}

	sort(v.begin(), v.end(), cmp);
	
	cout << v[0].first << "\n";

	return 0;
}