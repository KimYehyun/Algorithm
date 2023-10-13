#include<iostream>
#include<vector>
#include<cmath>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;
struct node {
	int len, sum;
	string str;
};
bool cmp(node& a, node& b) {
	if (a.len == b.len) {
		if (a.sum == b.sum) return a.str < b.str;
		return a.sum < b.sum;
	}
	return a.len < b.len;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	vector<node>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		int hap = 0;
		int s_size = s.size();
		for (int j = 0; j < s.size(); j++) {
			if (s[j] >= '0' && s[j] <= '9') {
				hap += s[j] - '0';
			}
		}
		v.push_back({ s_size, hap, s });
	}
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << v[i].str << "\n";
	}

	return 0;
}