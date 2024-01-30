#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t,n;
	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		cin >> n;
		vector<pair<bool,string>>v(n);
		for (int i = 0; i < n; i++) {
			v[i].first = 0;
			cin >> v[i].second;
		}
		int vsize = v[0].second.size();

		for (int i = 0; i < vsize; i++) {

			unordered_map<char, int>um;
			for (int j = 0; j < n; j++) {
				if (v[j].first != 0) continue;
				um[v[j].second[i]]++;
			}
			

			if (um.size() == 3 || um.size()==1) continue;
			else {

				char x = um.begin()->first;
				char y = (++um.begin())->first;
				
				if (x == 'R' && y=='S') {
					for (int j = 0; j < n; j++) {
						if (v[j].second[i] == y) {
							v[j].first = 1;
						}
					}
				}
				else if (x == 'R' && y == 'P') {
					for (int j = 0; j < n; j++) {
						if (v[j].second[i] == x) {
							v[j].first = 1;
						}
					}
				}
				else if (x == 'S' && y == 'R') {
					for (int j = 0; j < n; j++) {
						if (v[j].second[i] == x) {
							v[j].first = 1;
						}
					}
				}
				else if (x == 'S' && y == 'P') {
					for (int j = 0; j < n; j++) {
						if (v[j].second[i] == y) {
							v[j].first = 1;
						}
					}
				}
				else if (x == 'P' && y == 'R') {
					for (int j = 0; j < n; j++) {
						if (v[j].second[i] == y) {
							v[j].first = 1;
						}
					}
				}
				else if (x == 'P' && y == 'S') {
					for (int j = 0; j < n; j++) {
						if (v[j].second[i] == x) {
							v[j].first = 1;
						}
					}
				}
			}
		  
		}
		vector<int>ans;
		for (int i = 0; i < v.size(); i++) {
			if (v[i].first == 0) ans.push_back(i+1);
		}
		if (ans.size() == 1) cout << ans[0]<<"\n";
		else cout << 0<<"\n";
		
	}

	return 0;
}