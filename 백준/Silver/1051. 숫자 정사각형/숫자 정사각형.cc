#include<iostream>
#include<algorithm>
using namespace std;
int arr[51][51];
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char ch;
			cin >> ch;
			arr[i][j] = ch - '0';
		}
	}

	int max_v = min(n, m);
	int a, b, c, d;
	int ans = 0;
	for (int len = 1; len <= max_v; len++) {
		for (int i = 0; i <= n - len; i++) {
			for (int j = 0; j <= m - len; j++) {
				a = arr[i][j];
				b = arr[i + len - 1][j];
				c = arr[i][j + len - 1];
				d = arr[i + len - 1][j + len - 1];
				if (a == b && b == c && c == d)
					ans = len;
			}
		}
	}
	cout << ans * ans;
	return 0;
}