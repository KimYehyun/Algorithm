#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
vector<pair<int,int>>v;
bool cmp(pair<int, int>& a, pair<int, int>& b) {
	return a.second > b.second;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	sort(v.begin(), v.end(),cmp);
	int time = 0;
	int key = 0;

	for (int i = 0; i < n; i++) {
		if (i != 0) {
			if (v[i].second >= time) key += v[i].second - time;
			else if (time - v[i].second >= key) key = 0;
			else if (time - v[i].second < key) key -= time - v[i].second;
		}
		time = v[i].second - v[i].first;
	}

	if (key > 0) time -= key;

	if (time < 0) cout << -1 ;
	else cout << time << endl;

	return 0;
}