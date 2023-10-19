#include<iostream>
#include<set>
using namespace std;
int n, m;
set<string>s;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		s.insert(str);
	}

	for (int i = 0; i < m; i++) {
		string str2;
		cin >> str2;
		if (s.find(str2) != s.end()) cnt++;
	}
	cout << cnt << "\n";
	return 0;
}