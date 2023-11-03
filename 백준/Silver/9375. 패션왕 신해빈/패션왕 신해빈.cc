#include<iostream>
#include<map>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string s1, s2;
	map<string, int>ma;
	int n,m;
	cin >> n;
	for (int t = 0; t < n; t++) {
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> s1 >> s2;
			ma[s2]++;
		}
		int result = 1;
		
		for (auto a : ma) 
			result *= a.second + 1;
		
		cout << result - 1 << '\n';
		ma.clear();
	}

	return 0;
}