#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n, m;
bool error[11];
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		error[a] = 1;
	}

	int min_v = 987654321;
	for (int t = 0; t <= 1000000; t++) {
		int flag = 0;
		string s = to_string(t);
		for (int i = 0; i < s.size(); i++) {
			if (error[s[i] - '0'] == 1) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) continue;

		min_v = min(min_v, ((int)s.size() + abs(n - t)));
	}

	min_v = min(min_v, abs(100 - n));

	cout << min_v << "\n";

	return 0;
}