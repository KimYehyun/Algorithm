#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
struct node {
	int d, s, e;
};

bool cmp(node& a, node& b) {
	if (a.d == b.d) {
		if (a.e == b.e) return a.s < b.s;
		return a.e < b.e;
	}
	return a.d < b.d;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int t = 1; t <= n; t++) {
		int m;
		cin >> m;
		vector<node>v;
		for (int i = 0; i < m; i++) {
			int a;
			string str1, str2;
			cin >> a >> str1 >> str2;
			
			v.push_back({ a, stoi(str1.substr(0, 2)) * 60 + stoi(str1.substr(2, 2)), stoi(str2.substr(0, 2)) * 60 + stoi(str2.substr(2, 2)) });
		}

		sort(v.begin(), v.end(),cmp);

		int start_d = v[0].d;
		int E = v[0].e;
		int cnt = 1;

		for (int i = 1; i < v.size(); i++) {
			if (start_d==v[i].d) {
				if (v[i].s >= E) {
					cnt++;
					E = v[i].e;
				}
			}
			else {
				start_d = v[i].d;
				E = v[i].e;
				cnt++;
			}
		}
		cout << "Scenario #"<<t<<":\n" << cnt<<"\n";
		cout << "\n";
	}
	
	return 0;
}