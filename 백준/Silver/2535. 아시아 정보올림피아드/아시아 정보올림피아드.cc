#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
struct node {
	int country, number, jumsu;
};
bool cmp(node& a, node& b) {
	return a.jumsu > b.jumsu;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	vector<node>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v.push_back({ a,b,c });
	}
	sort(v.begin(), v.end(), cmp);

	int cnt = 0;
	int idx = 0;
	map<int, int>m;
	while (cnt < 3) {
		m[v[idx].country]++;
		if (m[v[idx].country] < 3) {
			cout << v[idx].country << " " << v[idx].number<<"\n";
			cnt++;
		}
		idx++;
	}

	return 0;
}