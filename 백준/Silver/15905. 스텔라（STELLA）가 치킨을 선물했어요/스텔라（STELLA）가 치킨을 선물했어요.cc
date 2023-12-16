#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int, int>>v;

bool cmp(pair<int, int>& a, pair<int, int>& b) {

	if (a.first == b.first) return a.second < b.second;
	return a.first > b.first;
}

int main(void) {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}

	sort(v.begin(), v.end(), cmp);

	int cnt = 0;
	if(n>5) {
		for (int i = 5; i < n; i++) {
			if (v[i].first == v[4].first) cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}