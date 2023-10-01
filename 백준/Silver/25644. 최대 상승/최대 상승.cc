#include<iostream>
using namespace std;
int n, m;
int arr[200001];
int dp[200001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	
	dp[0] = 0, m = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < m) m = arr[i];
		dp[i] = arr[i] - m > dp[i - 1] ? arr[i] - m : dp[i - 1];
	}
	cout << dp[n - 1]<<"\n";

	return 0;
}