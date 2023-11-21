#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct node {
	int k, t;
	char l;
};
vector<node>v;

bool cmp(node &a, node &b){
	if (a.t == b.t)
		return a.k < b.k;
	return a.t < b.t;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	int a, b;
	char c;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		v.push_back({ a,b,c });
	}
	sort(v.begin(), v.end(), cmp);
	for (auto k : v) {
		cout << k.l;
	}

	return 0;
}