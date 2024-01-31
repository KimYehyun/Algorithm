#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
unordered_map<string, int> ma;
vector<string>v;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		ma[str]=i;
	}
	
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}

	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (ma[v[i]] > ma[v[j]]) {
				cnt += 1;
				break;
			}
		}
	}
	cout << cnt << "\n";
	return 0;
}