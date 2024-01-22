#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
vector<pair<int,int>>v;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ b,a });
	}
	sort(v.begin(), v.end(),greater<pair<int,int>>());
	
	int time = v[0].first;
	for (auto a : v) {
		time = min(a.first, time);
		time -= a.second;
	}
	if (time < 0) cout << -1;
	else cout << time;
	
	return 0;
}