#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	for (int k = 0; k < t; k++) {
		int n; int arr[1000];
		map<string, int>ma;
		vector<pair<int, string>>v;
		cin >> n;
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			ma.insert({ s,i });
		}
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			arr[i] = ma[s];
		}
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			v.push_back({ arr[i],s });
		}
		sort(v.begin(), v.end());

		for (auto a : v)
			cout << a.second << " ";
		cout << "\n";
	}
	return 0;
}