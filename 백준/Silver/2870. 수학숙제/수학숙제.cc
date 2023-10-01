#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(string& a, string& b) {
	if (a.size() == b.size()) return a < b;
	return a.size() < b.size();
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	vector<string>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s,result="";
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] >= '0' && s[j] <= '9') {
				if (s[j] == '0'&&result[0]=='0') continue;
				else if (s[j] != '0' && result[0] == '0') {
					result = "";
					result += s[j];
				}
				else
				result += s[j];
			}
			else {
				if (!result.empty()) {
					v.push_back(result);
					result.clear();
				}
			}
		}
		if (!result.empty()) {
			v.push_back(result);
			result.clear();
		}
	}
	sort(v.begin(), v.end(),cmp);
	for (auto a : v) cout << a << "\n";
	return 0;
}