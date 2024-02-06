#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int>v;
int max_v, tmp_v;
void dfs() {
	if (v.size() == 2) {
		if (max_v < tmp_v) max_v = tmp_v;
		return;
	}
	for (int i = 1; i < v.size() - 1; i++) {
		int key = v[i];
		tmp_v += v[i - 1] * v[i + 1];
		v.erase(v.begin() + i);
		dfs();
		v.insert(v.begin() + i, key);
		tmp_v -= v[i - 1] * v[i + 1];
	}
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	dfs();
	cout << max_v;

	return 0;
}