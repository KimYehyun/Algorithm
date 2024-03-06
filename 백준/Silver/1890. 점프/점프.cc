#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
long long arr[101][101];
long long dp[101][101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	
	dp[0][0] = 1;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			int jump = arr[i][j];
			if (i != n-1 && i + jump < n)
				dp[i + jump][j] += dp[i][j];
			if (j != n-1 && j + jump < n)
				dp[i][j + jump] += dp[i][j];
		}
	}
	cout << dp[n - 1][n - 1] << "\n";
    return 0;
}