#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int t, n;
int arr[3];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		int ans = 2134567890;
		vector<string>s;
		vector<int>v;
		cin >> n;
	
		unordered_map<string, int>ma;
		for (int i = 0; i < n; i++) {
			string str;
			cin >> str;
			if(ma[str]<3)
				ma[str]++;
		}
	
		for (auto it = ma.begin(); it != ma.end(); it++) {
			for (int i = 0; i < it->second; i++) {
				s.push_back(it->first);
			}
		}

		for (int i = 0; i < 3; i++) v.push_back(1);
		for (int i = 0; i < s.size() - 3; i++) v.push_back(0);
		
		do {
			int a = 0;
			for (int i = 0; i < v.size(); i++) {
				if (v[i] == 1) {
					arr[a] = i;
					a++;
				}
			}
			int cnt = 0;
			for (int i = 0; i < 4; i++) {
				if (s[arr[0]][i] != s[arr[1]][i]) cnt++;
				if (s[arr[0]][i] != s[arr[2]][i]) cnt++;
				if (s[arr[1]][i] != s[arr[2]][i]) cnt++;
			}
			ans = min(ans,cnt);		
		} while (prev_permutation(v.begin(), v.end()));

		cout << ans << "\n";
	}

	return 0;
}