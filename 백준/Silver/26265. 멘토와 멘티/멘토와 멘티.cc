#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<string, string>>v;

bool cmp(pair<string, string>& a, pair<string, string>& b) {
	if (a.first == b.first) return a.second > b.second;
	return a.first < b.first;
}


int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str1, str2;
		cin >> str1 >> str2;
		v.push_back({ str1,str2 });
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}