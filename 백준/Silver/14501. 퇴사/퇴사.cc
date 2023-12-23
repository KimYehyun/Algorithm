#include<iostream>
#include<algorithm>
using namespace std;
int T[20];
int P[20];
int dp[20];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> T[i] >> P[i];
	}
	for (int i = n; i > 0; i--) {
		if (i + T[i] > n + 1) {
			dp[i] = dp[i + 1];
		}
		else {
			dp[i] = max(dp[i + 1], dp[i + T[i]] + P[i]);
		}
	}
	cout << dp[1] << "\n";
	return 0;
}