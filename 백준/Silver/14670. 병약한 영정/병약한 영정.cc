#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n,m;
	map<int, int>ma;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		ma[a] = b;
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		int c, k;
		vector<int>v;
		cin >> c;
		for (int j = 0; j < c; j++) {
			cin >> k;
			for (auto a : ma)
			{
				if (a.first == k) v.push_back(a.second);
			}
			
		}
		if (c == v.size()) {
			for (auto a : v) cout << a << " ";
		}
		else {
			cout << "YOU DIED";
		}
		cout << "\n";
	}
	return 0;
}