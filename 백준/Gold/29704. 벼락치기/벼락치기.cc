#include<iostream>
#include<cmath>
using namespace std;

int day[1001];
int money[1001];
int dp[1001][1001];

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m, result = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> day[i];
		cin >> money[i];
		result += money[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j >= day[i])dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - day[i]]+money[i]);
			else dp[i][j] = dp[i - 1][j];
		}
	}

	cout << result - dp[n][m];

	return 0;
}