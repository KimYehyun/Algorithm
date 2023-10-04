#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct node {
	int idx, g, s, b ,r;
};
bool cmp(node& a, node& b) {
	if (a.g == b.g) {
		if (a.s == b.s) {
			a.b > b.b;
		}
		return a.s > b.s;
	}
	return a.g > b.g;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k;
	vector<node>v;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		v.push_back({ a,b,c,d,0 });
	}

	sort(v.begin(), v.end(), cmp);

	v[0].r = 1;
	for (int i = 1; i < v.size(); i++) {
		if (v[i - 1].g == v[i].g && v[i - 1].s == v[i].s && v[i - 1].b == v[i].b)
			v[i].r = i;
		else v[i].r = i+1;
	}

	for (int i = 0; i < v.size(); i++) {
		if (k == v[i].idx) {
			cout << v[i].r << "\n";
			break;
		}
	}

	return 0;
}