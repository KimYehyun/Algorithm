#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

bool cmp(pair<int, string>& a, pair<int, string>& b) {
	if (a.first == b.first) {
		if (a.second.size() == b.second.size()) {
			return a.second < b.second;
		}
		return a.second.size() < b.second.size();
	}
	return a.first < b.first;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m, a; 
	string b;
	vector<pair<int, string>>v1,v2;
	map<int, int>ma;
	cin >> n >> m;

	while (1) {
		cin >> a >> b;
		if (a == 0 && b == "0") break;
		if (a % 2 == 1) {
			ma[a]++;
			if(ma[a]<=m)
				v1.push_back({ a,b });
		}
		else {
			ma[a]++;
			if (ma[a] <= m)
				v2.push_back({ a,b });
		}
	}
	sort(v1.begin(), v1.end(), cmp);
	sort(v2.begin(), v2.end(), cmp);
	for (auto v : v1) {
		cout << v.first << " " << v.second<<"\n";
	}
	for (auto v : v2) {
		cout << v.first << " " << v.second << "\n";
	}

	return 0;
}